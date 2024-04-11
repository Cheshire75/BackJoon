// 카드2
#include <iostream>
#include <queue>

int main()
{
    std::queue<int> Q;
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        Q.push(i);
    }
    while (Q.size() > 1)
    {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    std::cout << Q.front();
}