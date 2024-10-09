/* Churkin Kirill st129364@student.spbu.ru
	task 2b
*/

#include <iostream>
#include <string>


int main()
{
    std::string st;
    std::cout << "Input your polish notation: ";
    std::cin >> st;

    float *lst = new float [st.length()];
    int total = 0;
    int res = 0;
    for(int i = 0; i < st.length(); ++i)
    {
        if (st[i] != '+' && st[i] != '-' && st[i] != '*' && st[i] != '/')
        {   
	    lst[i] = st[i] - '0';
	}
        else if (st[i] == '+')
        {
            lst[i] = lst[i - 2] + lst[i - 1];
        }
        else if (st[i] == '-')
        {
            lst[i] = lst[i - 2] -  lst[i - 1];
        }
        else if (st[i] == '*')
        {
            lst[i] = lst[i- 2] * lst[i - 1]; 
        }
        else if (st[i] == '/')
        {
            lst[i] = lst[i - 2] / lst[i - 1];
        }
    }
    std::cout << "Your result is: " << lst[st.length() - 1] << std::endl;
    //for(int i = 0; i < st.length(); ++i)
    //    std::cout << lst[i] << std::endl;
    delete[] lst;
}
