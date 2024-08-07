#include <iostream>

int upper(int n, int t)
{
    if (n / t * t < n)
    {
        return n / t + 1;
    }
    else
    {
        return n / t;
    }
}

int main()
{
    int n, s, m, l, xl, xxl, xxxl, t, p;
    std::cin >> n;
    std::cin >> s >> m >> l >> xl >> xxl >> xxxl;
    std::cin >> t >> p;

    int neededT, neededP1, neededP2;
    neededT = upper(s, t) + upper(m, t) + upper(l, t) + upper(xl, t) + upper(xxl, t) + upper(xxxl, t);
    neededP1 = n / p;
    neededP2 = n % p;

    std::cout << neededT << "\n"
              << neededP1 << " " << neededP2;

    return 0;
}
