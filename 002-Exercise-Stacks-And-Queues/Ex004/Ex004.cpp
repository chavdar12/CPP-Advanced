#include <iostream>
#include <queue>

int main()
{
    int food_quantity;
    std::cin >> food_quantity;

    std::queue<int> orders;
    int max_order = 0;

    int order;
    while (std::cin >> order)
    {
        orders.push(order);
        if (order > max_order)
        {
            max_order = order;
        }
    }

    while (!orders.empty())
    {
        const int current_order = orders.front();
        orders.pop();

        if (food_quantity >= current_order)
        {
            food_quantity -= current_order;
        }
        else
        {
            std::cout << "Orders left:";
            while (!orders.empty())
            {
                std::cout << " " << orders.front();
                orders.pop();
            }
            std::cout << '\n';
            return 0;
        }
    }

    std::cout << max_order << '\n';
    std::cout << "Orders complete" << '\n';

    return 0;
}
