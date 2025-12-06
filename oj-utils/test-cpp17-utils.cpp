#include <iostream>
#include <vector>

// cpp11 utils are enough.
#include "cpp11-utils.hpp"

int main() {
    std::cout << "test cpp17-utils.hpp\n";
    std::vector<int> nums1{1, 3, 5, 7};
    SHOW(nums1);
    std::vector<std::vector<int>> matrix1{{1, 3, 5}, {2, 4, 6}};
    SHOW(matrix1);
}
