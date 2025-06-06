#include <iostream>
#include <cctype>

int main()
{
    char letter, letter_up;
    std::cin >> letter;
    std::cout << (letter_up = std::toupper(letter));
    return 0;
}
