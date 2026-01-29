#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <sstream>

struct student
{
    std::vector<double> grades;
};

int main()
{
    int num_records;
    std::cout << "Enter the number of records: ";
    std::cin >> num_records;
    std::cin.ignore();

    std::map<std::string, student> student_records;

    for (int i = 0; i < num_records; ++i)
    {
        std::string line;
        std::cout << "Enter student name and grade (separated by space): ";
        std::getline(std::cin, line);

        std::istringstream iss(line);
        std::string name;
        double grade;

        iss >> name >> grade;

        student_records[name].grades.push_back(grade);
    }

    std::cout << std::fixed << std::setprecision(2);
    for (const auto& record : student_records)
    {
        std::cout << record.first << " -> ";
        for (const auto& grade : record.second.grades)
        {
            std::cout << grade << " ";
        }

        double total = 0;
        for (const auto& grade : record.second.grades)
        {
            total += grade;
        }

        const double average = total / record.second.grades.size();
        std::cout << "(avg: " << average << ")" << '\n';
    }

    return 0;
}
