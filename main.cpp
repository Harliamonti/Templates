#include <iostream>

#include "cpp/basicT.cpp"

int main()
{
    std::cout << liam::max(1, 3) << std::endl;
    std::cout << liam::max2(1.1, 3) << std::endl;
    std::cout << liam::max3(1.1, 3) << std::endl;
    std::cout << test::max(1.1, 3) << std::endl;

    std::vector<int> vec { 1, 2, 9, 45, 22 };
    std::vector<int> vec2 { 1, 2, 3, 4, 5 };
    std::vector<double> vec3 { 1, 2, 3, 4, 5 };
    std::vector<int> vec4 { 1, 2, 3, 4, 5 };
    std::vector<char> vec5 {'a', 'f'};
    int a{55}, b{45};

    test::operation(a, b, test::add);
    test::performFunction(vec, test::addOneVec);

    t::performFunc(vec3, t::addOne);
    t::performFunc(vec4, t::addOne);
    // t::performFunc(vec5, t::addOne);

    for (auto& it : vec4)
    {
        std::cout << it << std::endl;
    }

}

// decltype(*expression*) All it does is return the type of the expression