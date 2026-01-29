#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    int primary_sum = 0, secondary_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        primary_sum += matrix[i][i];
        secondary_sum += matrix[i][n - i - 1];
    }

    const int difference = std::abs(primary_sum - secondary_sum);

    std::cout << difference << '\n';

    return 0;
}
