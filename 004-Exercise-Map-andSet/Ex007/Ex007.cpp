#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    std::unordered_map<std::string, int> resources;

    std::string resource;
    int quantity;
    std::vector<std::string> order;
    while (std::cin >> resource && resource != "stop" && std::cin >> quantity) {
        if (resources.count(resource) == 0) {
            order.push_back(resource);
        }
        resources[resource] += quantity;
    }

    for (const auto &name: order) {
        std::cout << name << " -> " << resources[name] << '\n';
    }

    return 0;
}
