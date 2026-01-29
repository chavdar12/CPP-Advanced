#include <iostream>
#include <sstream>
#include <vector>

struct company
{
    std::string name;
    int id;
};

int main()
{
    std::vector<company> companies;

    std::string input;
    while (std::getline(std::cin, input) && input != "end")
    {
        std::istringstream iss(input);
        std::string name;
        int id;
        if (iss >> name >> id && id >= 0)
        {
            companies.push_back({name, id});
        }
    }

    for (const auto& company : companies)
    {
        std::cout << company.name << " " << company.id << '\n';
    }

    return 0;
}
