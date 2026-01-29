#include <iostream>
#include <vector>

int main()
{
    int rows, cols;
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    std::vector<int> column_sum(cols, 0);
    for (int j = 0; j < cols; ++j)
    {
        for (int i = 0; i < rows; ++i)
        {
            column_sum[j] += matrix[i][j];
        }
    }

    for (const int sum : column_sum)
    {
        std::cout << sum << '\n';
    }

    return 0;
}
