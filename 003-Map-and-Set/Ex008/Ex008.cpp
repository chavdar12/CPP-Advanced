#include <iostream>
#include <set>
#include <sstream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::set<std::string> elements;

    for (int i = 0; i < n; ++i)
    {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream iss(line);
        std::string element;
        while (iss >> element)
        {
            elements.insert(element);
        }
    }

    for (const auto& element : elements)
    {
        std::cout << element << " ";
    }
    std::cout << '\n';

    return 0;
}
