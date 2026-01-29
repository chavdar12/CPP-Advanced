#include <iostream>
#include <unordered_map>

int main()
{
    int n;
    std::cin >> n;

    std::unordered_map<int, int> counts;

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;
        counts[num]++;
    }

    int result = 0;
    for (const auto& pair : counts)
    {
        if (pair.second % 2 == 0)
        {
            result = pair.first;
            break;
        }
    }

    std::cout << result << '\n';

    return 0;
}
