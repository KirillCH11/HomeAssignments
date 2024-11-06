/* Churkin Kirill st129364@student.spbu.ru
	Lab work 1
*/


#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>

#pragma pack(push,1)

struct BMP_Header 
{
    uint16_t file_type = 0x4D42;
    uint16_t reserve_1 = 0;
    uint16_t reserve_2 = 0;
    uint32_t file_size = 0;
    uint32_t data_offset = 0;
};

struct BMP_Info 
{
    uint32_t header_size = 0;
    int32_t width = 0;
    int32_t height = 0;
    uint16_t color_planes = 1;
    uint16_t bit_count = 24;
    uint32_t compression = 0;
    uint32_t image_size = 0;
    int32_t pixels_per_meter_x = 0;
    int32_t pixels_per_meter_y = 0;
    uint32_t colors_count = 0;
    uint32_t imp_colors_count = 0;
};

#pragma pack(pop)

class Image_BMP 
{
public:
    BMP_Header file_header;
    BMP_Info info_header;
    std::vector<uint8_t> lst;

    Image_BMP(const std::string& file_name) 
    {
        load(file_name);
    }
    
    void load(const std::string& file_name);
    void save(const std::string& file_name);
    void rotate_clockwise();
    void rotate_counter_clockwise();
    void Gauss_filter();
};


void Image_BMP::load(const std::string& filename) 
{
    std::ifstream file(filename, std::ios::binary);
    file.read(reinterpret_cast<char*>(&file_header), sizeof(BMP_Header));
    file.read(reinterpret_cast<char*>(&info_header), sizeof(BMP_Info));

    lst.resize(info_header.width * info_header.height * 3);
    file.seekg(file_header.data_offset, std::ios::beg);
    file.read(reinterpret_cast<char*>(lst.data()), lst.size());
}

void Image_BMP::save(const std::string& filename) 
{
    std::ofstream file(filename, std::ios::binary);
    file_header.file_size = sizeof(BMP_Header) + sizeof(BMP_Info) + lst.size();
    info_header.image_size = lst.size();

    file.write(reinterpret_cast<const char*>(&file_header), sizeof(BMP_Header));
    file.write(reinterpret_cast<const char*>(&info_header), sizeof(BMP_Info));
    file.write(reinterpret_cast<const char*>(lst.data()), lst.size());
}

void Image_BMP::rotate_clockwise() 
{
    std::vector<uint8_t> lst_new(info_header.width * info_header.height * 3);
    int new_width = info_header.height;
    int new_height = info_header.width;

    for (int y = 0; y < info_header.height; ++y) 
    {
        for (int x = 0; x < info_header.width; ++x) 
        {
            int new_x = y;
            int new_y = new_width - 1 - x;
            lst_new[(new_y * new_height + new_x) * 3] = lst[(y * info_header.width + x) * 3];
            lst_new[(new_y * new_height + new_x) * 3 + 1] = lst[(y * info_header.width + x) * 3 + 1];
            lst_new[(new_y * new_height + new_x) * 3 + 2] = lst[(y * info_header.width + x) * 3 + 2];
        }
    }

    lst = std::move(lst_new);
    info_header.width = new_width;
    info_header.height = new_height;
}

void Image_BMP::rotate_counter_clockwise() 
{
    std::vector<uint8_t> lst_new(info_header.width * info_header.height * 3);
    int new_width = info_header.height;
    int new_height = info_header.width;

    for (int y = 0; y < info_header.height; ++y) {
        for (int x = 0; x < info_header.width; ++x) {
            int new_x = new_height - 1 - y;
            int new_y = x;
            lst_new[(new_y * new_height + new_x) * 3] = lst[(y * info_header.width + x) * 3];
            lst_new[(new_y * new_height + new_x) * 3 + 1] = lst[(y * info_header.width + x) * 3 + 1];
            lst_new[(new_y * new_height + new_x) * 3 + 2] = lst[(y * info_header.width + x) * 3 + 2];
        }
    }
    
    lst = std::move(lst_new);
    info_header.width = new_width;
    info_header.height = new_height;
}

void Image_BMP::Gauss_filter() 
{
    const float yadr[3][3] = {
        {1/16.0, 2/16.0, 1/16.0},
        {2/16.0, 4/16.0, 2/16.0},
        {1/16.0, 2/16.0, 1/16.0}
    };

    std::vector<uint8_t> lst_new(lst.size());

    for (int y = 1; y < info_header.height - 1; ++y) 
    {
        for (int x = 1; x < info_header.width - 1; ++x) 
        {
            float r = 0, g = 0, b = 0;
            for (int ky = -1; ky <= 1; ++ky) 
            {
                for (int kx = -1; kx <= 1; ++kx) 
                {
                    int pix_ind = (((y + ky) * info_header.width + (x + kx)) * 3);
                    r += lst[pix_ind + 2] * yadr[ky + 1][kx + 1];
                    g += lst[pix_ind + 1] * yadr[ky + 1][kx + 1];
                    b += lst[pix_ind] * yadr[ky + 1][kx + 1];
                }
            }

            int new_pix_ind = ((y * info_header.width + x) * 3);
            lst_new[new_pix_ind + 2] = std::min(std::max(static_cast<int>(r), 0), 255);
            lst_new[new_pix_ind + 1] = std::min(std::max(static_cast<int>(g), 0), 255);
            lst_new[new_pix_ind] = std::min(std::max(static_cast<int>(b), 0), 255);
        }
    }

    lst = std::move(lst_new);
}


int main() {
    Image_BMP image("Panda.bmp");

    image.rotate_clockwise();
    image.save("image_clockwise.bmp");

    image.rotate_counter_clockwise();
    image.rotate_counter_clockwise();
    image.save("image_counter_clockwise.bmp");

    image.rotate_clockwise();
    image.Gauss_filter();
    image.save("gaussian_filtered_image.bmp");

    std::cout << "Processing has been completed successfully!" << std::endl;
    return 0;
}
