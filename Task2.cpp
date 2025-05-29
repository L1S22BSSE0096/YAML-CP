#include <iostream>
#include <string>
#include <string_view>
#include <algorithm>

// Function to count vowels in a string_view
constexpr int countVowels(std::string_view text) {
    int count = 0;
    for (char c : text) {
        c = std::tolower(static_cast<unsigned char>(c));
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int vowels = countVowels(input);

    std::cout << "Number of vowels: " << vowels << '\n';

    return 0;
}
