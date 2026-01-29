#include <iostream>
#include <vector>

void fill_matrix_pattern(std::vector<std::vector<int>>& matrix, int n)
{
    int num = 1;
    for (int col = 0; col < n; ++col)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; ++row)
            {
                matrix[row][col] = num++;
            }
        }
        else
        {
            for (int row = n - 1; row >= 0; --row)
            {
                matrix[row][col] = num++;
            }
        }
    }
}

int main()
{
    int n;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    fill_matrix_pattern(matrix, n);

    std::cout << "Filled matrix:\n";
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
