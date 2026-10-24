#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

std::string is_balanced(const std::string &expression) {
    std::stack<char> stack;
    std::unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char ch: expression) {
        if (mapping.find(ch) != mapping.end()) {
            if (stack.empty() || stack.top() != mapping[ch]) {
                return "NO";
            }
            stack.pop();
        } else if (ch == '(' || ch == '[' || ch == '{') {
            stack.push(ch);
        }
    }

    return stack.empty() ? "YES" : "NO";
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << is_balanced(line) << '\n';
    }

    return 0;
}
