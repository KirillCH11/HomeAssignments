/* Churkin Kirill st129364@student.spbu.ru
	task 2b
*/

#include <iostream>
#include <stack>
#include <sstream>

int main() 
{
    std::string st;
    std::stack<float> stack;
    std::cout << "Input your polish notation: ";
    std::getline(std::cin, st);
    std::istringstream sin(st);
    std::string per;

    while (sin >> per) 
    {
        if (isdigit(per[0]))
        {
            stack.push(std::stod(per));
        }
        else 
        {
            float b = stack.top(); stack.pop();
            float a = stack.top(); stack.pop(); 
            
            if (per == "+") 
            {
                stack.push(a + b);
            } 
            else if (per == "-") 
            {
                stack.push(a - b);
            } 
            else if (per == "*") 
            {
                stack.push(a * b);
            } 
            else if (per == "/") 
            {
                stack.push(a / b);
            }
        }
    }

    float rez = stack.top();
    std::cout << "Your result is: " << rez << std::endl;
}
