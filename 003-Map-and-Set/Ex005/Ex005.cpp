#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>

int main()
{
    std::unordered_set<std::string> cars;

    std::string input;
    while (true)
    {
        std::getline(std::cin, input);
        if (input == "END")
        {
            break;
        }

        std::istringstream iss(input);
        std::string direction, car_number;
        iss >> direction >> car_number;

        if (direction == "IN")
        {
            cars.insert(car_number);
        }
        else if (direction == "OUT")
        {
            cars.erase(car_number);
        }
    }

    if (cars.empty())
    {
        std::cout << "Parking Lot is Empty" << '\n';
    }
    else
    {
        for (const auto& car : cars)
        {
            std::cout << car << '\n';
        }
    }

    return 0;
}
