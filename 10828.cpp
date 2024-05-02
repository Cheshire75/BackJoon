// 스택
#include <stack>
#include <iostream>
#include <string>

int main()
{
    std::stack<int> S;
    std::string instruction;
    int n, input;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> instruction;
        if (instruction == "push")
        {
            std::cin >> input;
            S.push(input);
            std::cin.ignore();
        }
        else if (instruction == "pop")
        {
            if (!S.empty())
            {
                std::cout << S.top() << std::endl;
                S.pop();
            }
            else
                std::cout << "-1\n";
        }
        else if (instruction == "size")
        {
            std::cout << S.size() << std::endl;
        }
        else if (instruction == "empty")
        {
            std::cout << S.empty() << std::endl;
        }
        else if (instruction == "top")
        {
            if (S.empty())
                std::cout << "-1\n";
            else
            {
                std::cout << S.top() << std::endl;
            }
        }
    }

    return 0;
}