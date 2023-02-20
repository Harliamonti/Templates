#include <iostream>
#include <type_traits>

namespace liam
{
    template <typename T>
    T max(T lhs, T rhs)
    {
        return lhs > rhs ? lhs : rhs;
    }

    template <typename T, typename T2>
    auto max2 (T a, T2 b) -> decltype(true ? a : b)
    {
        return a > b ? a : b;
    }

    template <typename T1, typename T2, typename RT = std::decay_t<decltype(true ? T1() : T2())>> // Why is parenthesis used after T1?
    RT max3 (T1 a, T2 b)
    {
        return a > b ? a : b;

    }
}

