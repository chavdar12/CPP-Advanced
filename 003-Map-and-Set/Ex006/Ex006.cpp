#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::unordered_set<std::string> unique_usernames;
    for (int i = 0; i < n; ++i) {
        std::string username;
        std::cin >> username;
        if (unique_usernames.insert(username).second) {
            std::cout << username << '\n';
        }
    }

    return 0;
}
