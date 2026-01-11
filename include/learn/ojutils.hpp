#ifndef LEARN_OJUTILS_HPP_
#define LEARN_OJUTILS_HPP_

#include <iostream>
#include <vector>

// macros for debug
#if __cplusplus < 202302L
#define SHOW(...)                                                 \
    {                                                             \
        std::cout << #__VA_ARGS__ " = " << (__VA_ARGS__) << "\n"; \
    }
#else
#include <print>
#define SHOW(...)                                          \
    {                                                      \
        std::print(#__VA_ARGS__ " = {}\n", (__VA_ARGS__)); \
    }
#endif

#if __cplusplus < 202302L
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

#endif  // LEARN_OJUTILS_HPP_
