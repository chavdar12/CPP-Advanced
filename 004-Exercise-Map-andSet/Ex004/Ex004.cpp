#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>

int main()
{
    std::string text;
    std::getline(std::cin, text);

    std::transform(text.begin(), text.end(), text.begin(), ::tolower);

    std::stringstream ss(text);
    std::string word;
    std::set<std::string> short_words;
    while (ss >> word)
    {
        if (word.size() < 5)
        {
            short_words.insert(word);
        }
    }

    for (auto it = short_words.begin(); it != short_words.end(); ++it)
    {
        std::cout << *it;
        if (std::next(it) != short_words.end())
        {
            std::cout << ", ";
        }
    }
    std::cout << '\n';

    return 0;
}
