// 소수 찾기
#include <iostream>
#include <vector>

class Prime
{
public:
    bool prime[1001];
    // 해당 인덱스를 입력으로 받았을 때 소수인지 아닌지 확인할 수 있도록 bool 배열을 선언
    Prime()
    // 클래스 객체 생성과 함께 prime 배열에 에라토스테네스의 체를 만든다.
    {
        for (int i = 0; i < 1001; i++)
        {
            prime[i] = true;
        }
        prime[1] = false;
        // 1은 소수가 아닌 특수한 경우이므로 별도의 수정을 해준다.
        for (int i = 2; i < 1001; i++)
        {
            for (int j = i * i; j < 1001; j += i)
            {
                prime[j] = false;
            }
        }
    }
    bool isPrime(int input)
    // prime[input]의 값을 그대로 반환하여 입력받은 값이 소수인지 아닌지 확인할 수 있다.
    {
        return prime[input];
    }
};

int main()
{
    int n;
    std::cin >> n;
    int input, cnt = 0;
    Prime prime;
    // 검사를 위해 에라토스테네스의 체가 저장된 Prime 객체를 생성해준다.

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        if (prime.isPrime(input))
            cnt++;
    }

    std::cout << cnt << std::endl;
    return 0;
}