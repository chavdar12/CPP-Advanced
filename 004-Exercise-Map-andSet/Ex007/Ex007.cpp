#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> resources;

    std::string resource;
    int quantity;
    while (true)
    {
        std::cin >> resource;
        if (resource == "stop")
        {
            break;
        }
        std::cin >> quantity;

        resources[resource] += quantity;
    }

    for (const auto& pair : resources)
    {
        std::cout << pair.first << " -> " << pair.second << '\n';
    }

    return 0;
}
