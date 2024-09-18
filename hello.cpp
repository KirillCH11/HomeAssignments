/* Churkin Kirill st129364@student.spbu.ru
	first test project
*/

# include "hello.h"
# include <iostream>

void f_p::SayHello()
{
	std::string s = "World";
	SayHello(s);
	for (;;)
    {
	    std::cout << "Input your name: ";
	    std::cin >> s;
	    SayHello(s);
    }

}

void f_p::SayHello(const std::string &name)
{
	std::cout << "Hello, " << name << "!" << std::endl;
}
