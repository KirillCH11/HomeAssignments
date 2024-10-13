/* Churkin Kirill st129364@student.spbu.ru
	task 2a
*/


#include <filesystem>
#include <iostream>
#include <fstream>

/* В main не должна находиться внутренняя логика программы, это нужно разбивать на функции и классы */
int  main()
{
    std:: ifstream file("test.txt", std::ios_base::binary);
    int size = std::filesystem::file_size("test.txt");
    /* Если у тебя будет много такого, то не сможешь уследить за всей выделенной памятью, поэтому
     * следует научиться пользоваться умными указателями или использовать здесь контейнер из 
     * стандартной библиотеки (например vector, у него есть метод data(), который вернет массив,
     * который можно передать в read) */
    int *lst = new int [size];
    file.read((char*)lst, size);
    file.close();
    // Лишних комментов быть не должно
    //for(int i = 0; i < size; ++i)
    //    std::cout << lst[i] << std::endl;
    // Поворот массива точно должен быть отдельной функцией
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
    // sizeof(size) это 4
    file_out.write((char *)lst, sizeof(size));
    file_out.close();
    delete[] lst;
}
