// 좌표정렬하기
#include <iostream>
#include <algorithm>
#include <vector>

typedef struct coord
// 점의 좌표를 묶어놓은 구조체
{
    int x;
    int y;
} coord;

bool cmp(const coord &a, const coord &b)
// 정렬조건
{
    if (a.x == b.x)
        return a.y < b.y;
    // x좌표가 같다면 y값이 작은 순으로 정렬
    else
        return a.x < b.x;
    // x좌표가 다르다면 x값이 작은 순으로 정렬
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<coord> points;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        std::cin >> x >> y;
        coord point{x = x, y = y};

        points.push_back(point);
    }

    std::sort(points.begin(), points.end(), cmp);

    for (auto i : points)
        std::cout << i.x << " " << i.y << "\n";

    return 0;
}