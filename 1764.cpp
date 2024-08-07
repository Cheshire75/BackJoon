#include <iostream>
#include <string>
#include <set>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::string name;
    std::set<std::string> nonListened, nonBoth;
    for (int i = 0; i < n; i++)
    {
        std::cin >> name;
        nonListened.insert(name);
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> name;
        if (nonListened.find(name) != nonListened.end())
        {
            nonBoth.insert(name);
        }
    }
    int size = nonBoth.size();
    std::cout << size << '\n';
    for (auto i : nonBoth)
    {
        std::cout << i << '\n';
    }
    return 0;
}