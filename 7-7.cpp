#include <iostream>

class Base
{
    virtual void method();

public: 
    void call_method() {method();};
};

void Base::method()
{
    std::cout << "" << std::endl;
}

class Derived : public Base
{
    void method() override;
}

void Derived::method()
{
    std::cout << "" << std::endl;
}

int main()
{
    Derived derived;
    derived.call_method();
}