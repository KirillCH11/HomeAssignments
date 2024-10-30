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
    float lst_stack[33];
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
                lst_stack[++top_lst] = second / first;
            }
        }
    }
	return lst_stack[top_lst];
}

int main() 
{
    std::string user_input;
    std::cout << "Input your polish notation: ";
    std::getline(std::cin, user_input);

	float rez = polish_calculator(user_input);
	std::cout << "Your result is: " << rez << std::endl;
}
