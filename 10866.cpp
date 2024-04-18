// 덱
#include <iostream>
#include <deque>
#include <string>

int main()
{
    int n, input;
    std::deque<int> D;
    std::string instruction;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> instruction;
        if (instruction == "push_front")
        {
            std::cin >> input;
            D.push_front(input);
        }
        else if (instruction == "push_back")
        {
            std::cin >> input;
            D.push_back(input);
        }
        else if (instruction == "pop_front")
        {
            if (D.empty())
            {
                std::cout << "-1\n";
                continue;
            }
            std::cout << D.front() << std::endl;
            D.pop_front();
        }
        else if (instruction == "pop_back")
        {
            if (D.empty())
            {
                std::cout << "-1\n";
                continue;
            }
            std::cout << D.back() << std::endl;
            D.pop_back();
        }
        else if (instruction == "size")
        {
            std::cout << D.size() << std::endl;
        }
        else if (instruction == "empty")
        {
            std::cout << D.empty() << std::endl;
        }
        else if (instruction == "front")
        {
            if (D.empty())
            {
                std::cout << "-1\n";
                continue;
            }
            std::cout << D.front() << std::endl;
        }
        else if (instruction == "back")
        {
            if (D.empty())
            {
                std::cout << "-1\n";
                continue;
            }
            std::cout << D.back() << std::endl;
        }
    }
    return 0;
}