// 평균
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    int input;
    std::vector<int> score;
    for (int i = 0; i < n; i++)
    // 입력받는 점수들을 모두 score 벡터에 저장
    {
        std::cin >> input;
        score.push_back(input);
    }

    // score의 최댓값을 m으로 설정
    int m = *std::max_element(score.begin(), score.end());

    std::vector<float> editedScore;
    for (int i = 0; i < n; i++)
    // 수정된 점수를 editedScore 벡터에 저장
    {
        editedScore.push_back((float)score[i] / m * 100);
    }

    // editedScore의 평균을 구한다.
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += editedScore[i];
    }
    float avg = sum / n;

    std::cout << avg << std::endl;
    return 0;
}