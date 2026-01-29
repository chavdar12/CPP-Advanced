#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<double> numbers;
    double num;

    while (std::cin >> num)
    {
        numbers.push_back(num);
    }

    std::sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i)
    {
        std::cout << numbers[i];
        if (i != numbers.size() - 1)
        {
            std::cout << " <= ";
        }
    }
    std::cout << '\n';

    return 0;
}
