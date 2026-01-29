#include <iostream>
#include <set>
#include <string>

int main()
{
    int num_names;
    std::cout << "Enter the number of names: ";
    std::cin >> num_names;

    std::set<std::string> unique_names;

    for (int i = 0; i < num_names; ++i)
    {
        std::string name;
        std::cin >> name;
        unique_names.insert(name);
    }

    for (const auto& name : unique_names)
    {
        std::cout << name << '\n';
    }

    return 0;
}
