#include <iostream>

constexpr int MAX_ROWS = 100;
constexpr int MAX_COLS = 100;

bool is_valid_cell(const int row, const int col, const int rows, const int cols)
{
    return row >= 0 && row < rows && col >= 0 && col < cols;
}

int count_mines(char matrix[][MAX_COLS], const int row, const int col, const int rows, const int cols)
{
    int count = 0;
    for (int i = -1; i <= 1; ++i)
    {
        for (int j = -1; j <= 1; ++j)
        {
            if (i == 0 && j == 0) continue;
            const int new_row = row + i;
            const int new_col = col + j;
            if (is_valid_cell(new_row, new_col, rows, cols) && matrix[new_row][new_col] == '!')
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int rows, cols;
    char matrix[MAX_ROWS][MAX_COLS];

    std::cin >> rows >> cols;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == '!')
            {
                std::cout << '!';
            }
            else
            {
                const int count = count_mines(matrix, i, j, rows, cols);
                std::cout << count;
            }
        }
        std::cout << '\n';
    }

    return 0;
}
