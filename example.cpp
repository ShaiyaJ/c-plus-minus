#include <vector>
#include <iostream>

#include "cpm.hpp"

int main() {
    std::vector<int> ints = {8, 4, 5, 9};

    for (int n : ints)
        std::cout << n << std::endl;

    return 0;
}
