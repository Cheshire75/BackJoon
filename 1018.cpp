// 체스판 다시 칠하기
#include <iostream>
#include <vector>
#include <cstring>

typedef struct board88
{
    char tiles[8][8];
} board88;

int lineCheck(char line[8], char bw)
// 모서리 색으로 입력받은 bw와 한 줄(8개의 char)을 비교해서 번갈아가며 그려지지 않은 타일의 수를 구한다
{
    int wrongTile = 0;
    for (int i = 0; i < 8; i += 2)
    {
        if (line[i] != bw)
            wrongTile++;
    }
    for (int i = 1; i < 8; i += 2)
    {
        if (line[i] == bw)
            wrongTile++;
    }
    return wrongTile;
}

int boardCheck(board88 board)
// 입력받은 8x8 보드의 행들을 각각 lineCheck()를 이용해 잘못그려진 타일의 총 개수를 구한다.
{
    int blackCornerError = 0, whiteCornerError = 0;

    // 모서리가 검은색인 보드의 에러
    for (int i = 0; i < 8; i += 2)
        blackCornerError += lineCheck(board.tiles[i], 'B');
    for (int i = 1; i < 8; i += 2)
        blackCornerError += lineCheck(board.tiles[i], 'W');

    // 모서리가 흰색인 보드의 에러
    for (int i = 0; i < 8; i += 2)
        whiteCornerError += lineCheck(board.tiles[i], 'W');
    for (int i = 1; i < 8; i += 2)
        whiteCornerError += lineCheck(board.tiles[i], 'B');

    return std::min(blackCornerError, whiteCornerError);
}

std::vector<board88> boardCutting(char **bigBoard, int n, int m)
// 입력으로 받은 커다란 보드를 8x8 보드로 나눌 수 있는 케이스를 벡터 형태로 반환한다
{
    std::vector<board88> cutBoards;

    for (int i = 0; i + 7 < m; i++)
    {
        for (int j = 0; j + 7 < n; j++)
        {
            board88 littleBoard;
            for (int k = 0; k < 8; k++)
            {
                strncpy(littleBoard.tiles[k], &bigBoard[j + k][i], 8);
            }
            cutBoards.push_back(littleBoard);
        }
    }

    return cutBoards;
}

int main()
{
    int m, n;
    std::cin >> n >> m;
    std::cin.get();

    char **bigBoard = new char *[n];
    for (int i = 0; i < n; i++)
    {
        bigBoard[i] = new char[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> bigBoard[i][j];
        }
        std::cin.get();
    }

    int min = n * m;
    for (auto i : boardCutting(bigBoard, n, m))
    {
        int number = boardCheck(i);
        min = std::min(number, min);
    }

    std::cout << min;
    for (int i = 0; i < n; i++)
        delete[] bigBoard[i];
    delete[] bigBoard;

    return 0;
}