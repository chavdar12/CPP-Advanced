#include <iostream>
#include <string>
#include <sstream>

std::string reverse_string(const std::string& str) {
    std::string reversed;
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
        std::reverse(word.begin(), word.end());
        reversed += word + " ";
    }
    if (!reversed.empty()) {
        reversed.pop_back();
    }
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    const std::string reversed = reverse_string(input);
    std::cout << reversed << '\n';

    return 0;
}
