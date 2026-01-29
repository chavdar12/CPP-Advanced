#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_map<int, std::string> companies;

    std::string name;
    int id;
    while (std::cin >> name >> id && name != "end")
    {
        companies[id] = name;
    }

    int search_id;
    std::cin >> search_id;

    const auto it = companies.find(search_id);
    if (it != companies.end())
    {
        std::cout << it->second << " " << it->first << '\n';
    }
    else
    {
        std::cout << "[not found]" << '\n';
    }

    return 0;
}
