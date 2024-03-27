// 문자열 반복
#include <iostream>
#include <cstring>

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;
        std::string str;
        std::cin >> str;
        for (int j = 0; j < (int)str.length(); j++)
        {
            for (int k = 0; k < m; k++)
            {
                std::cout << str[j];
            }
        }
        std::cout << std::endl;
    }
    return 0;
}