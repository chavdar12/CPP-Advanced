#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <algorithm>

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::transform(line.begin(), line.end(), line.begin(), ::tolower);

    std::istringstream iss(line);
    std::string word;
    std::unordered_map<std::string, int> wordCount;
    while (iss >> word)
    {
        wordCount[word]++;
    }

    std::vector<std::string> odd_occurrences;
    for (const auto& pair : wordCount)
    {
        if (pair.second % 2 != 0)
        {
            odd_occurrences.push_back(pair.first);
        }
    }

    for (size_t i = 0; i < odd_occurrences.size(); ++i)
    {
        if (i > 0)
        {
            std::cout << ", ";
        }
        std::cout << odd_occurrences[i];
    }
    std::cout << '\n';

    return 0;
}
