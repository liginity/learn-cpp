#ifndef CPP11_UTILS_HPP_
#define CPP11_UTILS_HPP_

#include <iostream>
#include <vector>

// macros for debug
#define SHOW(...)                                               \
    {                                                           \
        std::cout << #__VA_ARGS__ " = " << (__VA_ARGS__) << "\n"; \
    }

inline std::ostream &operator<<(std::ostream &os, const std::vector<int> &vec) {
    os << "{";
    for (const auto &elem : vec) {
        os << elem << ", ";
    }
    os << "}";
    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const std::vector<std::vector<int>> &vec) {
    os << "{\n";
    for (const auto &elem : vec) {
        os << "    " << elem << ",\n";
    }
    os << "}";
    return os;
}

#endif
