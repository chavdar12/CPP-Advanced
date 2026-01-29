#include <iostream>
#include <vector>

void reverse_diagonals(std::vector<std::vector<int>>& matrix)
{
    const int n = matrix.size();
    for (int i = 0; i < n / 2; ++i)
    {
        for (int j = 0; j < n / 2; ++j)
        {
            if (i != j && i + j != n - 1)
            {
                std::swap(matrix[i][j], matrix[n - 1 - i][n - 1 - j]);
            }
        }
    }
}

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

    reverse_diagonals(matrix);

    for (const auto& row : matrix)
    {
        for (const int element : row)
        {
            std::cout << element << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
