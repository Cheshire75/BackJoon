// 집합
#include <iostream>
#include <set>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::set<int> S;
    int n, input;
    std::string instruction;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> instruction;
        if (instruction == "add")
        {
            std::cin >> input;
            S.insert(input);
        }
        else if (instruction == "remove")
        {
            std::cin >> input;
            S.erase(input);
        }
        else if (instruction == "check")
        {
            std::cin >> input;
            std::cout << S.count(input) << "\n";
        }
        else if (instruction == "toggle")
        {
            std::cin >> input;
            if (S.count(input))
                S.erase(input);
            else
                S.insert(input);
        }
        else if (instruction == "all")
        {
            S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        }
        else if (instruction == "empty")
        {
            S.clear();
        }
    }
    return 0;
}