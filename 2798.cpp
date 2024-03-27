// 블랙잭
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, m;
    std::cin >> n >> m;
    int *cards = new int[n];
    // 입력받은 n만큼의 배열을 선언

    for (int i = 0; i < n; i++)
    {
        // 바닥에 깔린 카드를 저장
        std::cin >> cards[i];
    }

    std::vector<int> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (cards[i] + cards[j] + cards[k] <= m)
                {
                    // 세 장의 합이 버스트인 경우를 제외하고 sum 벡터에 push
                    sum.push_back(cards[i] + cards[j] + cards[k]);
                }
            }
        }
    }
    std::cout << *(std::max_element(sum.begin(), sum.end())) << std::endl;
    // sum 벡터의 요소 중 최댓값을 출력

    return 0;
}