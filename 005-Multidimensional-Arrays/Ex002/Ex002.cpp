#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int num;
        for (int j = 0; j < n; ++j)
        {
            std::cin >> num;
            if (i == j)
            {
                sum += num;
            }
        }
    }

    std::cout << sum << '\n';

    return 0;
}
