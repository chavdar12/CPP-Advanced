#include <iostream>
#include <stack>
#include <sstream>
#include <string>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    std::stack<int> nums;
    std::istringstream iss(input);
    int num;
    while (iss >> num)
    {
        nums.push(num);
    }

    std::string command;
    while (std::cin >> command && command != "end")
    {
        if (command == "add")
        {
            int num1, num2;
            std::cin >> num1 >> num2;
            nums.push(num1);
            nums.push(num2);
        }
        else if (command == "remove")
        {
            int count;
            std::cin >> count;
            for (int i = 0; i < count && !nums.empty(); ++i)
            {
                nums.pop();
            }
        }
    }

    int sum = 0;
    while (!nums.empty())
    {
        sum += nums.top();
        nums.pop();
    }

    std::cout << sum << '\n';

    return 0;
}
