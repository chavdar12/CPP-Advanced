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

    int number;
    std::cin >> number;

    bool found = false;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == number)
            {
                std::cout << "(" << i << ", " << j << ")" << '\n';
                found = true;
            }
        }
    }

    if (!found)
    {
        std::cout << "not found" << '\n';
    }

    return 0;
}
