// A+B
#include <iostream>

int main()
{
    int a, b;
    while (1)
    {
        std::cin >> a >> b;
        if (a + b == 0)
        {
            break;
        }
        std::cout << a + b << std::endl;
    }
    return 0;
}