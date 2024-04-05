// 요세푸스 문제 0
#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> arr, result;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i + 1);
    }

    int idx = 0; // arr에서 뽑아낼 정수의 인덱스

    while (arr.size())
    // arr가 비어질 때까지 반복
    {
        idx = (idx + k - 1) % n;
        // 뽑아낼 다음 인덱스
        result.push_back(arr[idx]);
        arr.erase(arr.begin() + idx);
        n--;
    }

    // 출력양식
    std::cout << "<";
    for (int i = 0; i < (int)result.size() - 1; i++)
    {
        std::cout << result[i] << ", ";
    }
    std::cout << *(result.end() - 1) << ">";
    return 0;
}