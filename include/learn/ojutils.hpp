#ifndef LEARN_OJUTILS_HPP_
#define LEARN_OJUTILS_HPP_

#include <cassert>

// macros for debug
#if __cplusplus < 202302L
#include <iostream>
#define SHOW(...)                                                 \
    {                                                             \
        std::cout << #__VA_ARGS__ " = " << (__VA_ARGS__) << "\n"; \
    }

#else
// c++23
#include <print>

#define SHOW(...)                                          \
    {                                                      \
        std::print(#__VA_ARGS__ " = {}\n", (__VA_ARGS__)); \
    }

inline const char INDENT_SPACES[16 + 1] = {"                "};

#define SHOW_INDENT(indent_level, ...)                                \
    {                                                                 \
        assert(indent_level <= 4);                                    \
        std::print("{}" #__VA_ARGS__ " = {}\n",                       \
                   std::string_view(INDENT_SPACES, 4 * indent_level), \
                   (__VA_ARGS__));                                    \
    }

#endif


#if __cplusplus < 202302L
#include <vector>

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
