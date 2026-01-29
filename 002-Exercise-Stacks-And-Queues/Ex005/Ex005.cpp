#include <iostream>
#include <stack>

int main()
{
    std::stack<int> clothes;
    int rack_capacity;
    int rack_count = 0;

    int clothes_value;
    while (std::cin >> clothes_value && clothes_value != 0)
    {
        clothes.push(clothes_value);
    }

    std::cin >> rack_capacity;

    int current_rack_sum = rack_capacity;
    while (!clothes.empty())
    {
        if (current_rack_sum >= clothes.top())
        {
            current_rack_sum -= clothes.top();
            clothes.pop();
        }
        else
        {
            rack_count++;
            current_rack_sum = rack_capacity;
        }
    }

    std::cout << rack_count + 1 << '\n';

    return 0;
}
