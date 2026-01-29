#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

int main()
{
    int n, s, x;
    std::cin >> n >> s >> x;

    std::stack<int> stack;

    for (int i = 0; i < n; ++i)
    {
        int num;
        std::cin >> num;
        stack.push(num);
    }

    for (int i = 0; i < s && !stack.empty(); ++i)
    {
        stack.pop();
    }

    std::vector<int> vec;
    while (!stack.empty())
    {
        vec.push_back(stack.top());
        stack.pop();
    }

    const bool found = std::find(vec.begin(), vec.end(), x) != vec.end();

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
