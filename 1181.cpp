// 단어 정렬
#include <iostream>
#include <cstring>
#include <vector>
#include <set>

int main()
{
    std::vector<std::string> word;
    std::set<std::string> wordSet;
    int n;
    std::cin >> n;
    std::string input;

    // 입력받는 단어들을 wordSet 집합에 insert
    // 집합에 원소들을 추가하여 중복되는 값을 걸러낸다.
    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        wordSet.insert(input);
    }

    // word 벡터가 비어있을 때를 고려하여 ""를 word에 push한다
    word.push_back("");

    // wordSet에서 단어를 하나씩 꺼내 선택정렬한다.
    for (auto i : wordSet)
    {
        // word의 크기만큼만 검사를 시행하면 된다.
        for (int j = 0; j <= (int)word.size(); j++)
        {
            if (word[j].length() == 0 || i.length() < word[j].length())
            // wordSet에서 처음 나온 단어 또는 나온 단어가 word[j]보다 짧은 경우 그 자리에 i를 삽입한다
            {
                word.insert(word.begin() + j, i);
                break;
                // 이후 반복을 끝내고 다음 i를 꺼낸다
            }
            else
            {
                if (i.length() == word[j].length() && i.compare(word[j]) < 0)
                // i와 word[j]의 길이가 같은 경우 철자를 비교한다.
                {
                    word.insert(word.begin() + j, i);
                    break;
                }
            }
        }
    }

    for (auto i : word)
    {
        std::cout << i << std::endl;
    }
    return 0;
}