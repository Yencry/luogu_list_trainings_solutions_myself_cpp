#include <iostream>
#include <cctype>

int main()
{
    char letter, letter_up;
    namespace std1 = std;
    std1::cin >> letter;
    std1::cout << (letter_up = std1::toupper(letter));
    return 0;
}
