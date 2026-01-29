#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> matrix(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> matrix[i];
    }

    char symbol;
    std::cin >> symbol;

    bool found = false;
    int row, col;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < matrix[i].size(); ++j)
        {
            if (matrix[i][j] == symbol)
            {
                row = i + 1;
                col = j + 1;
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (found)
    {
        std::cout << "(" << row << ", " << col << ")" << '\n';
    }
    else
    {
        std::cout << symbol << " does not occur in the matrix" << '\n';
    }

    return 0;
}
