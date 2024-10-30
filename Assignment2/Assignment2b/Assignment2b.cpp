/* Churkin Kirill st129364@student.spbu.ru
	task 2b
*/

#include <iostream>
#include <string>
#include <sstream>

float polish_calculator(std::string val_now) 
{
    std::istringstream sin(val_now);
    std::string per;
    float* lst_stack = new float[33]; 
    int top_lst = -1;

    while (sin >> per) 
    {
        if (isdigit(per[0]))
        {
            lst_stack[++top_lst] = std::stod(per);
        }
        else
        {
            float first = lst_stack[top_lst--]; 
            float second = lst_stack[top_lst--]; 

            if (per == "+") 
            {
                lst_stack[++top_lst] = second + first;
            }
            else if (per == "-") 
            {
                lst_stack[++top_lst] = second - first;
            }
            else if (per == "*") 
            {
                lst_stack[++top_lst] = second * first;
            } 
            else if (per == "/") 
            {
                if (first == 0) 
                {
                    std::cerr << "Error: Division by zero" << std::endl;
                    delete[] lst_stack;
                    return 0;
                }
                else
                {
                	lst_stack[++top_lst] = second / first;
                }
            }
        }
    }
    float pred_rez = lst_stack[top_lst];
    delete[] lst_stack;
    return pred_rez;
}

int main() 
{
    std::string user_input;
    std::cout << "Input your polish notation: ";
    std::getline(std::cin, user_input);

    float rez = polish_calculator(user_input);
    std::cout << "Your result is: " << rez << std::endl;
}
