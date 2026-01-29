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

    std::sort(numbers.begin(), numbers.end(), std::greater<double>());

    const int count = std::min(static_cast<int>(numbers.size()), 3);
    for (int i = 0; i < count; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << '\n';

    return 0;
}
