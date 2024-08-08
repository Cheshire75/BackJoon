// ATM
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, pt;
    std::vector<int> p;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> pt;
        p.push_back(pt);
    }
    std::sort(p.begin(), p.end());

    int min = 0;
    for (int i = 0; i < n; i++)
    {
        min += p[i] * (n - i);
    }

    std::cout << min;
    return 0;
}