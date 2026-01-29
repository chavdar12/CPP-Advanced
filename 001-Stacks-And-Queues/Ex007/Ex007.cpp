#include <iostream>
#include <queue>
#include <string>

int main()
{
    std::queue<std::string> children;
    int n;
    std::string name;

    while (std::cin >> name)
    {
        children.push(name);
    }

    std::cin >> n;

    while (children.size() > 1)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            std::string front_child = children.front();
            children.pop();
            children.push(front_child);
        }

        std::cout << "Removed " << children.front() << '\n';
        children.pop();
    }

    std::cout << "Last is " << children.front() << '\n';

    return 0;
}
