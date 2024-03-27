// 문자와 문자열
#include <iostream>

int main()
{
    std::string str;
    int i;
    std::cin >> str;
    std::cin >> i;
    std::cout << str[i - 1] << std::endl;
    return 0;
}