#include <iostream>
#include <stack>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    // each entry remembers the max/min of the stack below it, so pop restores them
    struct entry {
        int value, max, min;
    };
    std::stack<entry> stk;

    for (int i = 0; i < n; ++i) {
        int type;
        std::cin >> type;

        if (type == 1) {
            int x;
            std::cin >> x;
            if (stk.empty()) {
                stk.push({x, x, x});
            } else {
                stk.push({x, std::max(stk.top().max, x), std::min(stk.top().min, x)});
            }
        } else if (type == 2) {
            if (!stk.empty()) {
                stk.pop();
            }
        } else if (type == 3 && !stk.empty()) {
            std::cout << stk.top().max << '\n';
        } else if (type == 4 && !stk.empty()) {
            std::cout << stk.top().min << '\n';
        }
    }

    // printed from top to bottom
    while (!stk.empty()) {
        std::cout << stk.top().value;
        stk.pop();
        if (!stk.empty()) {
            std::cout << ", ";
        }
    }
    std::cout << '\n';

    return 0;
}
