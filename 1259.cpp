// 펠린드롬수
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string input;
    std::string reversedInput;
    // input에 검사할 숫자를 받고 reversedInput에는 검사를 위해 input의 앞뒤가 반전된 숫자가 저장된다.
    while (1)
    {
        std::cin >> input;
        if (input == "0")
            break;
        reversedInput = input;
        std::reverse(reversedInput.begin(), reversedInput.end());
        // reversedInput에 저장된 문자열을 뒤집는다.

        if (!input.compare(reversedInput))
        {
            std::cout << "yes" << std::endl;
        }
        else
        {
            std::cout << "no" << std::endl;
        }
    }
    return 0;
}