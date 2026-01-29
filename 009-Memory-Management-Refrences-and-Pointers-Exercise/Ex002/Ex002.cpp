#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers;
    int num;
    while (std::cin >> num)
    {
        numbers.push_back(num);
    }

    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int x) { return x < 0; }), numbers.end());

    if (numbers.empty())
    {
        std::cout << "empty";
    }
    else
    {
        for (int i = numbers.size() - 1; i >= 0; --i)
        {
            std::cout << numbers[i] << " ";
        }
    }

    return 0;
}
