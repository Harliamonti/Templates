#include <iostream>
#include <type_traits>
#include <vector>
#include <string>
#include <concepts>

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

    template <typename T1, typename T2, typename RT = std::decay_t<decltype(true ? T1() : T2())>> // Why is parenthesis used after T1 & T2?
    RT max3 (T1 a, T2 b)
    {
        return a > b ? a : b;

    }
}


namespace test
{
    template <typename T, typename U>
    std::common_type_t<T, U> max(T lhs, U rhs)
    {
        return lhs > rhs ? lhs : rhs;
    }

    void operation(int lhs, int rhs, int (*func)(int a, int b))
    {
        std::cout << func(lhs, rhs) << std::endl;
    }

    int add(int lhs, int rhs) 
    {
        return lhs + rhs;
    }

    template <typename T>
    void performFunction(std::vector<T> &vec, void (*func)(std::vector<int> &arg) )
    {
        func(vec);
    }

    // template <typename T>
    void addOneVec(std::vector<int> &vec)
    {
        for (auto& it : vec)
        {
            it++;
        }
    }
}

namespace t
{
    template <typename T> requires std::floating_point<T> || std::integral<T> && (!(std::same_as<T, char>))
    void performFunc(std::vector<T> &vec, void (*func)(std::vector<T> &arg))
    {
        func(vec);
    }

    template <typename T>
    void addOne(std::vector<T> &vec)
    {
        for(auto& it : vec)
        {
            it++;
        }
    }
} // namespace t
























