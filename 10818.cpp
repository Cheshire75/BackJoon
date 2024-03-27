// 최소, 최대
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> arr;
    int input;
    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        arr.push_back(input);
    }
    std::cout << *(std::min_element(arr.begin(), arr.end())) << " " << *(std::max_element(arr.begin(), arr.end())) << std::endl;

    return 0;
}