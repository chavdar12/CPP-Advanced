#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> customers;
    std::string input;
    
    while (true) {
        std::cin >> input;
        if (input == "End") {
            std::cout << customers.size() << " people remaining." << '\n';
            break;
        }
        if (input == "Paid") {
            while (!customers.empty()) {
                std::cout << customers.front() << '\n';
                customers.pop();
            }
        } else {
            customers.push(input);
        }
    }

    return 0;
}
