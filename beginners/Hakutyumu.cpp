#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;

    std::vector<std::string> target_words = {"dream", "dreamer", "erase", "eraser"};

    // delete words from the end of the string.
    // because the words are not overlapping and we can safely remove them from the end.

    while (!S.empty()) {
        bool found = false;
        for (const auto& word : target_words) {
            if (S.size() >= word.size() && S.substr(S.size() - word.size()) == word) {
                S.erase(S.size() - word.size());
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
    return 0;
}