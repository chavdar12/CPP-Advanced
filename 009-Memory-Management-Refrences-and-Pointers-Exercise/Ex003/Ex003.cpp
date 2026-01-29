#include <iostream>

void print_parts(int** arr, const int n, const int m, const int r, const int c)
{
    for (int i = 0; i < r && i < n; ++i)
    {
        for (int j = 0; j < c && j < m; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    const auto arr = new int*[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    int r, c;
    std::cin >> r >> c;

    print_parts(arr, n, m, r, c);

    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
