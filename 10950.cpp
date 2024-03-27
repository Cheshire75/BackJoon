// A+B

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }
    return 0;
}