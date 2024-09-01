// 구간 합 구하기 4
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m;
    std::cin >> n >> m;
    int *arr = new int[n + 1];
    arr[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int tmp;
        std::cin >> tmp;
        arr[i] = tmp + arr[i - 1];
    }
    for (int k = 0; k < m; k++)
    {
        int i, j;
        std::cin >> i >> j;
        std::cout << arr[j] - arr[i - 1] << '\n';
    }
    return 0;
}