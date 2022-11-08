#include <iostream>

template <typename T>
T funsed_multiply_add(T a, T b, T c)
{
    T r = a * b + c;
    return r;
}

int main()
{
    std::cout << funsed_multiply_add<int>(1, 2, 3) << std::endl;

    std::cout << funsed_multiply_add<float>(1.23, 1.23, 1.23) << std::endl;

    std::cout << funsed_multiply_add<double>(1.23, 3.44, 45.2) std::endl;
}