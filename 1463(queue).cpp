// 1로 만들기
#include <iostream>
#include <queue>

std::queue<int> a, b;
int cnt = 0;

bool check()
{
    if (a.empty())
    {
        while (!(b.empty()))
        {
            int i = b.front();
            b.pop();
            if (i != 1)
            {
                if (i % 3 == 0)
                {
                    a.push(i / 3);
                }
                if (i % 2 == 0)
                {
                    a.push(i / 2);
                }
                a.push(i - 1);
            }
            else
            {
                return false;
            }
        }
    }
    else if (b.empty())
    {
        while (!(a.empty()))
        {
            int i = a.front();
            a.pop();
            if (i != 1)
            {
                if (i % 3 == 0)
                {
                    b.push(i / 3);
                }
                if (i % 2 == 0)
                {
                    b.push(i / 2);
                }
                b.push(i - 1);
            }
            else
            {
                return false;
            }
        }
    }
    cnt++;
    return true;
}

int main()
{
    int input;
    std::cin >> input;
    a.push(input);
    while (check())
        ;
    std::cout << cnt;
    return 0;
}