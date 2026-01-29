#include <iostream>
#include <vector>

int count_squares(const std::vector<std::vector<char>>& matrix)
{
    int count = 0;
    const int rows = matrix.size();
    const int cols = matrix[0].size();

    for (int i = 0; i < rows - 1; ++i)
    {
        for (int j = 0; j < cols - 1; ++j)
        {
            if (matrix[i][j] == '1' && matrix[i][j + 1] == '1' &&
                matrix[i + 1][j] == '1' && matrix[i + 1][j + 1] == '1')
            {
                ++count;
            }
        }
    }

    return count;
}

int main()
{
    int rows, cols;
    std::cin >> rows >> cols;

    std::vector<std::vector<char>> matrix(rows, std::vector<char>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    const int squares = count_squares(matrix);
    std::cout << squares << '\n';

    return 0;
}
