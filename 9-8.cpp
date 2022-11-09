#include <iostream>

template <typename T>
class S
{
public:
    static int value;
};

template <typename T>
int S<T>::value = 0;

int main()
{
    std::cout << "" << S<int>::value << std::endl;
    std::cout << "" << S<float>::value << std::endl;

    std::cout << "" << &S<int>::value << std::endl;

    std::cout << "" << &S<float>::value << std::endl;

    std::cout << "" << S<int>::value << std::endl;
    std::cout << "" << S<float>::value << std::endl;
}