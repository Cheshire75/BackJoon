// 1로 만들기
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr;
    arr.push_back(0); // 0
    arr.push_back(0); // 1
    arr.push_back(1); // 2
    arr.push_back(1); // 3

    int input;
    std::cin >> input;

    for (int i = 4; i <= input; i++)
    {
        int min = arr[i - 1] + 1;
        if (i % 3 == 0)
        {
            min = std::min(arr[i / 3] + 1, min);
        }
        if (i % 2 == 0)
        {
            min = std::min(arr[i / 2] + 1, min);
        }
        arr.push_back(min);
    }

    std::cout << arr[input];
    return 0;
}