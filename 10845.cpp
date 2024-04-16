// 큐
#include <iostream>
#include <queue>
#include <string>

int main()
{
    std::string instruction;
    int n, input;
    std::queue<int> Q;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> instruction;
        if (instruction == "push")
        {
            std::cin >> input;
            Q.push(input);
        }
        else if (instruction == "pop")
        {
            if (Q.empty())
            {
                std::cout << "-1\n";
                continue;
            }
            std::cout << Q.front() << std::endl;
            Q.pop();
        }
        else if (instruction == "size")
        {
            std::cout << Q.size() << std::endl;
        }
        else if (instruction == "empty")
            std::cout << Q.empty() << std::endl;
        else if (instruction == "front")
        {
            if (Q.empty())
            {
                std::cout << "-1\n";
                continue;
            }
            std::cout << Q.front() << std::endl;
        }
        else if (instruction == "back")
        {
            if (Q.empty())
            {
                std::cout << "-1\n";
                continue;
            }
            std::cout << Q.back() << std::endl;
        }
    }

    return 0;
}