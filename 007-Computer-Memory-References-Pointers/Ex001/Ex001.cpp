#include <iostream>
#include <string>

int main()
{
    std::string input1, input2;
    std::cin >> input1 >> input2;

    int num1, num2;
    bool parse1 = true, parse2 = true;

    try
    {
        num1 = std::stoi(input1);
    }
    catch (const std::invalid_argument&)
    {
        parse1 = false;
    }

    try
    {
        num2 = std::stoi(input2);
    }
    catch (const std::invalid_argument&)
    {
        parse2 = false;
    }

    if (parse1 && parse2)
    {
        std::cout << num1 + num2 << std::endl;
    }
    else
    {
        if (!parse1)
        {
            std::cout << "[error] " << input1 << '\n';
        }
        if (!parse2)
        {
            std::cout << "[error] " << input2 << '\n';
        }
    }

    return 0;
}
