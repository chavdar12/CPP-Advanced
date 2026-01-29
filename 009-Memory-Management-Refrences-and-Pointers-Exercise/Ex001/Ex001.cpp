#include <iostream>
#include <vector>

std::vector<int> gauss_trick(std::vector<int>& numbers)
{
    std::vector<int> result;
    while (!numbers.empty())
    {
        if (numbers.size() == 1)
        {
            result.push_back(numbers.back());
            numbers.pop_back();
        }
        else
        {
            result.push_back(numbers.front() + numbers.back());
            numbers.erase(numbers.begin());
            numbers.pop_back();
        }
    }
    return result;
}

int main()
{
    std::vector<int> numbers;
    int num;
    while (std::cin >> num)
    {
        numbers.push_back(num);
    }

    const std::vector<int> result = gauss_trick(numbers);

    for (int i = 0; i < result.size(); ++i)
    {
        std::cout << result[i];
        if (i != result.size() - 1)
        {
            std::cout << " ";
        }
    }
    return 0;
}
