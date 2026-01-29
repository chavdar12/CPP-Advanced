#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string> companies;

    std::string name;
    int id;
    while (std::cin >> name >> id && name != "end")
    {
        companies[id] = name;
    }

    for (const auto& pair : companies)
    {
        std::cout << pair.second << " " << pair.first << '\n';
    }

    return 0;
}
