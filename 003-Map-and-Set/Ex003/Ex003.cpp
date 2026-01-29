#include <iostream>
#include <map>
#include <vector>
#include <sstream>

int main()
{
    int num_entries;
    std::cin >> num_entries;
    std::cin.ignore();

    std::map<std::string, std::map<std::string, std::vector<std::string>>> continents;

    for (int i = 0; i < num_entries; ++i)
    {
        std::string continent, country, city;
        std::cout << "Enter continent, country, and city (separated by space): ";
        std::getline(std::cin, continent);

        std::istringstream iss(continent);
        iss >> continent >> country >> city;

        continents[continent][country].push_back(city);
    }

    for (const auto& continent : continents)
    {
        std::cout << continent.first << ":" << '\n';
        for (const auto& country : continent.second)
        {
            std::cout << "  " << country.first << " -> ";
            for (size_t i = 0; i < country.second.size(); ++i)
            {
                std::cout << country.second[i];
                if (i != country.second.size() - 1)
                {
                    std::cout << ", ";
                }
            }
            std::cout << '\n';
        }
    }

    return 0;
}
