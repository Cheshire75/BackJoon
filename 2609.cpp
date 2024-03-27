// 최대공약수와 최소공배수
#include <iostream>

int gcd(int a, int b)
{
    int max = std::max(a, b), min = std::min(a, b);
    while (max % min)
    {
        int tmp = min;
        min = max % min;
        max = tmp;
    }
    return min;
}

int lcm(int a, int b)
{
    int product = a * b;
    return product / gcd(a, b);
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    std::cout << lcm(a, b) << std::endl;
    return 0;
}