// 피보나치 함수
#include <iostream>

int *fibonacci(int n)
// f(0)=(1,0), f(1)=(0,1), f(n)=f(n-1)+f(n-2)라고 할 때, f(n)=a_n*f(n-1)+b_n*f(n-2)
// f(n)=(a_n+b_n)*f(n-3)+b_n*f(n-2)로 바꾸어 나타낼 수 있다.
// 이를 반복하면 각각 f(1)과 f(0)이 호출된 횟수로 바꾸어 나타낼 수 있다.
{
    int n1 = n - 1, n2 = n - 2;
    int *pair = new int[2]{0, 0};

    if (n < 2)
    {
        pair[n]++;
    }
    else
    {
        pair[0]++;
        pair[1]++;
        for (int i = 0; i < n - 2; i++)
        {
            if (n1 > n2)
            {
                n1 -= 2;
                pair[n2 % 2] += pair[(n2 + 1) % 2];
            }
            else
            {
                n2 -= 2;
                pair[n1 % 2] += pair[(n1 + 1) % 2];
            }
        }
    }
    return pair;
}

int main()
{
    int n, input;
    std::cin >> n;
    int *pair;
    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        pair = fibonacci(input);
        std::cout << pair[0] << " " << pair[1] << "\n";
    }

    return 0;
}