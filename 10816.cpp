// 숫자 카드2
#include <iostream>
#include <map>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    std::map<int, int> hand;
    // 상근이가 들고 있는 카드를 저장할 map

    int input;
    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        if (hand.count(input))
            hand[input]++;
        // 상근의 손에 입력받은 카드와 같은 값을 가진 카드가 있다면 해당 카드값을 키값으로 갖는 pair의 value값을 1 증가
        else
            hand[input] = 1;
        // 없다면 해당 카드값을 키값으로 갖는 pair를 만들어 map에 추가한다.
    }

    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        std::cin >> input;
        if (hand.count(input))
        {
            std::cout << hand[input] << " ";
            // 입력받은 값을 키값으로 갖는 pair의 value 반환
        }
        else
        {
            std::cout << "0 ";
            // 입력받은 값을 키값으로 갖는 pair가 없는 경우 0 출력
        }
    }

    return 0;
}