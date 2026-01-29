#include <iostream>
#include <vector>

int main()
{
    int rows1, cols1;
    std::cin >> rows1 >> cols1;

    std::vector<std::vector<int>> matrix1(rows1, std::vector<int>(cols1));
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            std::cin >> matrix1[i][j];
        }
    }

    int rows2, cols2;
    std::cin >> rows2 >> cols2;

    std::vector<std::vector<int>> matrix2(rows2, std::vector<int>(cols2));
    for (int i = 0; i < rows2; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            std::cin >> matrix2[i][j];
        }
    }

    bool equal = true;
    if (rows1 != rows2 || cols1 != cols2)
    {
        equal = false;
    }
    else
    {
        for (int i = 0; i < rows1; ++i)
        {
            for (int j = 0; j < cols1; ++j)
            {
                if (matrix1[i][j] != matrix2[i][j])
                {
                    equal = false;
                    break;
                }
            }
            if (!equal)
            {
                break;
            }
        }
    }

    std::cout << (equal ? "equal" : "not equal") << '\n';

    return 0;
}
