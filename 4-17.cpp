#include <iostream>

namespace A
{
    struct S
    {
        int a;
    };

    void foo()
    {
        std::cout << "" << std::endl;
    }
}

namespace B
{
    struct S
    {
        int b;
    };

    void foo()
    {
        std::cout << "" << std::endl;
    }
}

int main()
{
    A::foo();

    B::foo();

    A::S as;

    B::S bs;
}