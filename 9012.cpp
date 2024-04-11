// 괄호
#include <iostream>
#include <queue>

int main()
{
    int n;
    std::cin >> n;

    std::queue<char> Q;
    // 괄호를 저장할 큐

    for (int i = 0; i < n; i++)
    {
        std::string line;
        std::cin >> line;
        std::cin.get();
        // 문자열로 입력을 받아 line에 저장하고 줄바꿈문자를 버퍼에서 제거해준다.

        for (int j = 0; j < (int)line.length(); j++)
        {
            if (line[j] == '(')
                Q.push('(');
            // 여는 괄호가 입력될때는 큐에 push

            else if (line[j] == ')')
            // 입력에 닫는 괄호가 있다면
            {
                if (Q.empty())
                // 큐가 비어있을 때, 닫는 괄호가 입력되면 유효하지 않은 괄호 문자열이므로
                // NO를 출력하고 반복문을 탈출한다.
                {
                    Q.push(')');
                    // 반복문 밖에서 큐가 남아있는지를 확인하여 Yes/No를 판별하므로 이를 위해 큐에 문자 하나를 넣어준다.
                    break;
                }
                else
                    // 큐가 비어있지 않다면 여는 괄호 하나를 큐에서 제거한다.
                    Q.pop();
            }
        }

        if (Q.empty())
            std::cout << "YES\n";
        // 문자열의 모든 문자를 검사한 후 큐가 비어있다면 유효한 괄호문자열로 판단하고 YES를 출력한다.

        else
            std::cout << "NO\n";
        while (!Q.empty())
            Q.pop();
        // 큐가 비어있지 않다면 NO를 출력하고 큐가 빈 상태가 될때까지 요소를 제거하여 다음 입력을 준비한다.
    }
    return 0;
}