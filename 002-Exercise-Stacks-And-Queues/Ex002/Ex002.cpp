#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

int main()
{
    int n, s, x;
    std::cin >> n >> s >> x;

    std::queue<int> q;

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;
        q.push(num);
    }

    for (int i = 0; i < s && !q.empty(); ++i)
    {
        q.pop();
    }

    std::vector<int> vec;
    while (!q.empty())
    {
        vec.push_back(q.front());
        q.pop();
    }

    const auto found = std::find(vec.begin(), vec.end(), x) != vec.end();

    if (found)
    {
        std::cout << "true" << '\n';
    }
    else if (!vec.empty())
    {
        const int smallest = *std::min_element(vec.begin(), vec.end());
        std::cout << smallest << '\n';
    }
    else
    {
        std::cout << "0" << '\n';
    }

    return 0;
}
