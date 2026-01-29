#include <iostream>

constexpr int max_rows = 10;
constexpr int max_cols = 10;

bool compare_matrices(int mat1[][max_cols], int mat2[][max_cols], const int rows, const int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (mat1[i][j] != mat2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int mat1[max_rows][max_cols];
    int mat2[max_rows][max_cols];
    int rows1, rows2, cols1, cols2;

    std::cin >> rows1;
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            std::cin >> mat1[i][j];
        }
    }

    std::cin >> rows2;
    for (int i = 0; i < rows2; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            std::cin >> mat2[i][j];
        }
    }

    if (rows1 == rows2 && cols1 == cols2 && compare_matrices(mat1, mat2, rows1, cols1))
    {
        std::cout << "equal" << '\n';
    }
    else
    {
        std::cout << "not equal" << '\n';
    }

    return 0;
}
