// 나이순 정렬
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

typedef struct person
// 입력받는 회원의 나이와 이름을 저장할 구조체
{
    std::string name;
    int old;
} person;

bool sorting(const person &a, const person &b)
// 정렬조건
{
    return a.old < b.old;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<person> memberVector;

    for (int i = 0; i < n; i++)
    {
        int old;
        std::string name;
        std::cin >> old >> name;
        person member{name = name, old = old};
        // 입력받은 나이와 이름으로 person 구조체를 초기화

        memberVector.push_back(member);
        // 미리 선언한 person 벡터에 만들어진 member를 푸시
    }

    std::stable_sort(memberVector.begin(), memberVector.end(), sorting);
    // 정렬조건에 맞춰 안정정렬

    for (auto i : memberVector)
    {
        std::cout << i.old << " " << i.name << "\n";
    }

    return 0;
}