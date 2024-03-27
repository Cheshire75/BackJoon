// A+B

#include <iostream>
#include <string>

int main()
{
    int a, b;
    std::string numbers;
    while (std::cin >> a >> b)
    {
        std::cout << a + b << std::endl;
    }
    return 0;
}