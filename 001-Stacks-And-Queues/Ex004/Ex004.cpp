#include <iostream>
#include <stack>
#include <string>

void print_sub_expressions(const std::string& expression)
{
    std::stack<int> opening_brackets;

    for (int i = 0; i < expression.size(); ++i)
    {
        if (expression[i] == '(')
        {
            opening_brackets.push(i);
        }
        else if (expression[i] == ')')
        {
            const int start = opening_brackets.top();
            opening_brackets.pop();
            std::cout << expression.substr(start, i - start + 1) << '\n';
        }
    }
}

int main()
{
    std::string expression;
    std::getline(std::cin, expression);

    print_sub_expressions(expression);

    return 0;
}
