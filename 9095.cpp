// 1, 2, 3 더하기
#include <iostream>

int combination(int n, int k)
{
    int result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= (n - i);
    }
    for (int i = 0; i < k; i++)
    {
        result /= (k - i);
    }
    return result;
}

int main()
{
    int n, input;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        int cnt = 0;
        for (int c = 0; 3 * c <= input; c++)
        {
            for (int b = 0; 3 * c + 2 * b <= input; b++)
            {
                int a = input - 3 * c - 2 * b;
                int insert2 = 1, insert3 = 1;
                if (b != 0)
                {
                    insert2 = combination(a + b, b);
                }
                if (c != 0)
                {
                    insert3 = combination(a + b + c, c);
                }
                cnt += (insert2 * insert3);
            }
        }
        std::cout << cnt << '\n';
    }
    return 0;
}