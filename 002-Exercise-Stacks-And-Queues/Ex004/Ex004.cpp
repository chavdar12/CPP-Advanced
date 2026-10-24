#include <iostream>
#include <queue>

int main() {
    int food_quantity;
    std::cin >> food_quantity;

    std::queue<int> orders;
    int max_order = 0;

    int order;
    while (std::cin >> order) {
        orders.push(order);
        if (order > max_order) {
            max_order = order;
        }
    }

    std::cout << max_order << '\n';

    while (!orders.empty() && food_quantity >= orders.front()) {
        food_quantity -= orders.front();
        orders.pop();
    }

    if (orders.empty()) {
        std::cout << "Orders complete" << '\n';
    } else {
        std::cout << "Orders left:";
        while (!orders.empty()) {
            std::cout << " " << orders.front();
            orders.pop();
        }
        std::cout << '\n';
    }

    return 0;
}
