#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    int number;
    std::cin >> number;
    std::cin.ignore();

    std::istringstream iss(input);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word)
    {
        words.push_back(word);
    }

    if (number == 1)
    {
        std::sort(words.begin(), words.end());
        std::cout << words[0] << '\n';
    }
    else if (number == 2)
    {
        const auto shortest = std::min_element(words.begin(), words.end(),
                                               [](const std::string& a, const std::string& b)
                                               {
                                                   return a.length() < b.length();
                                               });
        std::cout << *shortest << '\n';
    }
    else if (number == 3)
    {
        const auto longest = std::max_element(words.begin(), words.end(), [](const std::string& a, const std::string& b)
        {
            return a.length() < b.length();
        });
        std::cout << *longest << '\n';
    }

    return 0;
}
