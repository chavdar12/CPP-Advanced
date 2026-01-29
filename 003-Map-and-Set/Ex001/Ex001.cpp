#include <iostream>
#include <map>
#include <sstream>

void countOccurrences(double arr[], int n) {
    std::map<double, int> counter;

    for (int i = 0; i < n; ++i) {
        counter[arr[i]]++;
    }

    for (auto const& pair : counter) {
        std::cout << pair.first << " - " << pair.second << " times" << '\n';
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    double arr[n];
    std::cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    countOccurrences(arr, n);

    return 0;
}
