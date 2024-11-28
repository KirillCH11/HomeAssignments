/* Churkin Kirill st129364@student.spbu.ru
	task 5
*/

#include <iostream>
#include "ClassTransformer.h"

int main()
{
    Transformer t1(7, 11, 15, 15, 15);
    Transformer t2(15, 15, 13, 13, 100);
    std::cout << t1;
    std::cout << t2;

    if (t1 > t2)
    {
        std::cout <<"1 is the smartest!"<<std::endl;
    }
    else
    {
        std::cout <<"2 is the smartest!"<<std::endl;
    }
    return 0;
};
