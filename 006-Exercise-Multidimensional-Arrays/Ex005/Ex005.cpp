#include <iostream>
#include <vector>

void find_maximal_sum_submatrix(const std::vector<std::vector<int>>& matrix, const int rows, const int cols,
                                const int sub_rows,
                                const int sub_cols)
{
    int max_sum = INT_MIN;
    int start_row = 0, start_col = 0;

    for (int i = 0; i <= rows - sub_rows; ++i)
    {
        for (int j = 0; j <= cols - sub_cols; ++j)
        {
            int sum = 0;
            for (int k = i; k < i + sub_rows; ++k)
            {
                for (int l = j; l < j + sub_cols; ++l)
                {
                    sum += matrix[k][l];
                }
            }
            if (sum > max_sum)
            {
                max_sum = sum;
                start_row = i;
                start_col = j;
            }
        }
    }

    std::cout << "Maximal sum is: " << max_sum << '\n';
    std::cout << "Submatrix:" << '\n';
    for (int i = start_row; i < start_row + sub_rows; ++i)
    {
        for (int j = start_col; j < start_col + sub_cols; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }
}

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

    int sub_rows, sub_cols;
    std::cin >> sub_rows >> sub_cols;

    find_maximal_sum_submatrix(matrix, rows, cols, sub_rows, sub_cols);

    return 0;
}
