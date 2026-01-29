#include <iostream>
#include <vector>
#include <string>

void move_snake(const std::vector<std::string>& matrix, const int rows, const int cols)
{
    bool move_right = true;
    std::string snake;

    for (int i = 0; i < rows; ++i)
    {
        if (move_right)
        {
            for (int j = 0; j < cols; ++j)
            {
                snake += matrix[i][j];
            }
        }
        else
        {
            for (int j = cols - 1; j >= 0; --j)
            {
                snake += matrix[i][j];
            }
        }
        move_right = !move_right;
    }

    std::cout << snake << '\n';
}

int main()
{
    int rows, cols;
    std::cin >> rows >> cols;
    std::vector<std::string> matrix(rows);

    for (int i = 0; i < rows; ++i)
    {
        std::cin >> matrix[i];
    }

    move_snake(matrix, rows, cols);

    return 0;
}
