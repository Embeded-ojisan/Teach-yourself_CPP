#include <iostrema>

class Base
{
public:
    virtual void foo();
};

void Base::foo()
{
    std::cout << "" << std::endl;
}

class Derived : public Base
{
public:
    void foo() override;
    void foo(int i);
};

void Derived::foo()
{
    std::cout << "" << std::endl;
}

void Derived::foo(int i)
{
    std::cout << "" << std::endl;
}

int main()
{
    Derived derived;
    derived.foo();
    derived.foo(42);
}