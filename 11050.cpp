// 이항 계수 1
#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;
    if (k == 0 || k == n)
        std::cout << 1 << std::endl;
    else
    {
        int product = n;
        for (int i = 1; i < k; i++)
            product *= (n - i);
        for (int i = 1; i <= k; i++)
            product /= i;
        std::cout << product << std::endl;
    }
    return 0;
}