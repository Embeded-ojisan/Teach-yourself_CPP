#include <memory>
#include <utility>
#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "" << std::endl;
    }

    ~A()
    {
        std::cout << "" << std::endl;
    }
};

std::unique_ptr<A> allocate()
{
    std::cout << "" << std::endl;
    std::unique_ptr<A> ptr{new A{}};

    return std::move(ptr);
}

int main()
{
    {
        std::unique_ptr<A> ptr;

        std::cout << "" << std::endl;

        ptr = allocate();

        std::cout << "" << std::endl;
     }
     std::cout << "" << std::endl;
}