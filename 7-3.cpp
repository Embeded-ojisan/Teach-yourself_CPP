#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "" << std::endl;
    }

    explicit Base(int i)
    {
        std::cout << "" << std::endl;
    }
};

class Derived : public Base
{
public:
    explicit Derived(int i) : Base{i} {}
};

int main()
{
    Derived derived{42};
}