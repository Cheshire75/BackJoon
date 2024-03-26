// 최댓값

#include <iostream>

int main()
{
    int arr[9];
    int max, maxIndex;
    for (int i = 0; i < 9; i++)
    {
        std::cin >> arr[i];
        if (i == 0 || max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    std::cout << max << "\n"
              << maxIndex + 1 << std::endl;
    return 0;
}