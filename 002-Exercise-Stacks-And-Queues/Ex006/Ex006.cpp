#include <iostream>
#include <vector>

int truck_tour(const std::vector<std::pair<int, int>>& pumps)
{
    int start = 0;
    int fuel = 0;
    int distance = 0;

    for (int i = 0; i < pumps.size(); ++i)
    {
        fuel += pumps[i].first;
        distance += pumps[i].second;

        if (fuel < distance)
        {
            start = i + 1;
            fuel = 0;
            distance = 0;
        }
    }

    return start;
}

int main()
{
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> pumps;
    for (int i = 0; i < N; ++i)
    {
        int petrol, distance;
        std::cin >> petrol >> distance;
        pumps.emplace_back(petrol, distance);
    }

    const int start = truck_tour(pumps);
    std::cout << start << '\n';

    return 0;
}
