#include <iostream>
#include <unordered_set>
#include <vector>

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::unordered_set<int> first_set;
    std::vector<int> common_elements;

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;
        first_set.insert(num);
    }

    for (int i = 0; i < m; ++i)
    {
        int num;
        std::cin >> num;
        if (first_set.count(num) > 0)
        {
            common_elements.push_back(num);
            first_set.erase(num);
        }
    }

    for (const auto num : common_elements)
    {
        std::cout << num << " ";
    }
    std::cout << '\n';

    return 0;
}
