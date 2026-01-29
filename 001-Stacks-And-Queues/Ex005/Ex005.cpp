#include <iostream>
#include <queue>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);

    std::queue<int> numbers;
    int num;
    while (iss >> num) {
        numbers.push(num);
    }

    bool first = true;
    while (!numbers.empty()) {
        const int current = numbers.front();
        numbers.pop();
        if (current % 2 == 0) {
            if (!first) {
                std::cout << ", ";
            }
            std::cout << current;
            first = false;
        }
    }

    std::cout << '\n';

    return 0;
}
