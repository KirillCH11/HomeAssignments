/* Churkin Kirill st129364@student.spbu.ru
	task 2a
*/


#include <filesystem>
#include <iostream>
#include <fstream>


int  main()
{
    std:: ifstream file("test.txt", std::ios_base::binary);
    int size = std::filesystem::file_size("test.txt");   
    int *lst = new int [size];
    file.read((char*)lst, size);
    file.close();

    //for(int i = 0; i < size; ++i)
    //    std::cout << lst[i] << std::endl;

    int x;
    for(int i = 0; i < size - i - 1; ++i)
    {
        x = lst[i];
        lst[i] = lst[size - i - 1];
        lst[size - i - 1] = x;
    }

    //for(int i = 0; i < size; ++i)
    //    std::cout << lst[i] << std::endl;

    std::ofstream file_out("test_out.txt", std::ios_base::binary);
    file_out.write((char *)lst, sizeof(size));
    file_out.close();
    delete[] lst;
}
