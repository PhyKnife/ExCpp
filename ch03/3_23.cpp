#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<int> num{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // using iterators
    for (auto it = num.begin(); it != num.end(); ++it) {
        *it *= 2;
    }

    // Output the contents of the vector
    for (auto n : num) {
        std::cout << n << " ";
    }

    std::cout << std::endl;

    return 0;
}