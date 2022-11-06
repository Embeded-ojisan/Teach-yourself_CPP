#include <iostream>

class Base
{
public:
    void method_Base();
};

void Base::method_Base()
{
    ;
}

class Derived : public Base
{
public:
    void method_Derived();
};

void Derived::method_Derived()
{
    ;
}

int main()
{
    Derived derived;
    
    derived.method_Base();

    derived.method_Derived();

    Base& base = derived;

    base.method_Base();
}