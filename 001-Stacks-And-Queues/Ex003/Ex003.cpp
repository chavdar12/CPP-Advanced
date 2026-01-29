#include <iostream>
#include <sstream>
#include <string>

int evaluate_expression(const std::string& expression)
{
    std::istringstream iss(expression);
    int result = 0;
    char op;
    while (iss >> op)
    {
        int num;
        iss >> num;
        if (op == '+')
        {
            result += num;
        }
        else if (op == '-')
        {
            result -= num;
        }
    }
    return result;
}

int main()
{
    std::string expression;
    std::getline(std::cin, expression);

    const int result = evaluate_expression(expression);

    std::cout << result << '\n';

    return 0;
}
