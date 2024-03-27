// 직각삼각형

#include <iostream>

bool isRightAngle(int a, int b, int c)
{
    int A(a * a), B(b * b), C(c * c);
    if (A == B + C || B == A + C || C == A + B)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b, c;
    while (1)
    {
        std::cin >> a >> b >> c;
        if (!(a + b + c))
            break;
        if (isRightAngle(a, b, c))
            std::cout << "right" << std::endl;
        else
            std::cout << "wrong" << std::endl;
    }
    return 0;
}