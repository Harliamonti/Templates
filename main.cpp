#include <iostream>
#include "cpp/basicT.cpp"

int main()
{
    std::cout << liam::max(1, 3) << std::endl;
    std::cout << liam::max2(1.1, 3) << std::endl;
    std::cout << liam::max3(1.1, 3) << std::endl;
}

// decltype(*expression*) All it does is return the type of the expression