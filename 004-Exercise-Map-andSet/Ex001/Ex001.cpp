#include <iostream>
#include <map>

int main()
{
    std::map<double, int> counts;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        double num;
        std::cin >> num;
        counts[num]++;
    }

    for (const auto& pair : counts)
    {
        std::cout << pair.first << " -> " << pair.second << '\n';
    }

    return 0;
}
