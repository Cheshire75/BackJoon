// 수 찾기
#include <iostream>
#include <algorithm>

bool binarySearch(int *arr, int target, int left, int right)
// 반복문을 이용한 이진탐색
// 재귀보다 단순 반복이 더 빠르다
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            left = mid + 1;
        else if (target < arr[mid])
            right = mid - 1;
    }
    return false;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    // c와 c++ 동기화와 입출력의 tie를 끊는다.

    int n, m;
    std::cin >> n;
    int *nArray = new int[n];
    // 초기 입력과 배열 선언

    for (int i = 0; i < n; i++)
    {
        std::cin >> nArray[i];
        // vector클래스의 push_back보다 그냥 배열에 직접 넣는게 훨씬 빠르다
    }

    std::sort(nArray, nArray + n);

    int input;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        std::cin >> input;
        std::cout << binarySearch(nArray, input, 0, n - 1) << "\n";
    }

    return 0;
}