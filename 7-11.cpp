#include <iostream>

class BaseA
{
    int value;

public:
    explicit BaseA(int value) : value{value} {}

    void show_BaseA()
    {
        std:cout << "" << value << std::endl;
    }
};

class BaseB
{
    int value;

public:
    explicit BaseB(itn value) : value{value} {}

    void show_BaseB()
    {
        std::cout << "" << value << std::endl;
    }
};

class Derived : public BaseA, public BaseB
{
public:
    Derived(int a, int b);
};

Derived::Derived(int a, int b)
    : BaseA{a}
    , BaseB{b}
{
}

int main()
{
    Derived derived{42, 72};

    derived.show_BaseA():
    derived.show_BaseB();
}