#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::vector<int> numbers;
    int num;

    while (std::cin >> num)
    {
        numbers.push_back(num);
    }

    std::vector<int> squares;
    for (int x : numbers)
    {
        const int root = std::sqrt(x);
        if (root * root == x)
        {
            squares.push_back(x);
        }
    }

    std::sort(squares.begin(), squares.end(), std::greater<int>());

    for (int i = 0; i < squares.size(); ++i)
    {
        std::cout << squares[i];
        if (i != squares.size() - 1)
        {
            std::cout << " ";
        }
    }
    std::cout << '\n';

    return 0;
}
