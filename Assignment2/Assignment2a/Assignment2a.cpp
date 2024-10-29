/* Churkin Kirill st129364@student.spbu.ru
	task 2a
*/


#include <filesystem>
#include <iostream>
#include <fstream>

void reverse(char *lst, int size);
void work();

int main()
{
    work();
}

void reverse(char *lst, int size)
{
    char x;
    for (int i = 0; i < size / 2; i++)
    {
        x = lst[i];
        lst[i] = lst[size - i - 1];
        lst[size - i - 1] = x;
    }
}

void work()
{
    std::ifstream file("test.txt", std::ios_base::binary);
    
    int size = std::filesystem::file_size("test.txt");
    char* lst = new char[size];
    
    file.read((char*)lst, size);
    file.close();

    reverse(lst, size);

    std::ofstream file_out("test_out.txt", std::ios_base::binary);
    file_out.write(lst, size);
    file_out.close();

    delete[] lst;
}
