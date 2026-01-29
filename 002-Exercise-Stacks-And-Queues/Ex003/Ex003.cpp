#include <iostream>
#include <stack>
#include <climits>

int main()
{
    int n;
    std::cin >> n;

    std::stack<int> stk;
    int max_element = INT_MIN;
    int min_element = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        int type;
        std::cin >> type;

        if (type == 1)
        {
            int x;
            std::cin >> x;
            stk.push(x);

            max_element = std::max(max_element, x);
            min_element = std::min(min_element, x);
        }
        else if (type == 2)
        {
            if (!stk.empty())
            {
                stk.pop();
            }
        }
        else if (type == 3)
        {
            std::cout << max_element << '\n';
        }
        else if (type == 4)
        {
            std::cout << min_element << '\n';
        }
    }

    std::stack<int> temp;
    while (!stk.empty())
    {
        temp.push(stk.top());
        stk.pop();
    }

    while (!temp.empty())
    {
        std::cout << temp.top();
        temp.pop();
        if (!temp.empty())
        {
            std::cout << ", ";
        }
    }
    std::cout << '\n';

    return 0;
}
