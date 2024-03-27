// 숫자의 합
#include <iostream>

int main()
{
    int n, result = 0;
    std::cin >> n;
    std::cin.get();
    // 버퍼 비워주기
    for (int i = 0; i < n; i++)
    {
        result += (std::cin.get() - '0');
    }
    std::cout << result << std::endl;
    return 0;
}