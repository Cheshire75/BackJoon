// 수 정렬하기2
#include <iostream>
#include <algorithm>

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int n;
    std::cin >> n;
    int *arr1 = new int[n / 2];
    int *arr2 = new int[n / 2 + n % 2];

    for (int i = 0; i < n / 2; i++)
    // 실행시간:n
    {
        std::cin >> arr1[i];
    }
    for (int i = 0; i < (n / 2 + n % 2); i++)
    {
        std::cin >> arr2[i];
    }
    std::sort(arr1, arr1 + n / 2);
    std::sort(arr2, arr2 + n / 2 + n % 2);

    int k1 = 0, k2 = 0;
    while (k1 < (n / 2) && k2 < (n / 2 + n % 2))
    {
        if (arr1[k1] < arr2[k2])
        {
            std::cout << arr1[k1] << "\n";
            k1++;
        }
        else
        {
            std::cout << arr2[k2] << "\n";
            k2++;
        }
    }
    if (k1 == (n / 2))
    {
        while (k2 < (n / 2 + n % 2))
        {
            std::cout << arr2[k2] << "\n";
            k2++;
        }
    }
    else
    {
        while (k1 < (n / 2))
        {
            std::cout << arr1[k1] << "\n";
            k1++;
        }
    }
    delete[] arr1;
    delete[] arr2;
    return 0;
}