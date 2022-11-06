#include <iostream>

class BaseA
{
public:
    void method_BaseA()
    {
        std::cout << "" << std::endl;
    }
};

class BaseB
{
public:
    void method_BaseB()
    {
        std::cout << "" << std::endl;
    }
};

class Derived
    : public BaseA
    , public BaseB
{
public:
    void method_Derived()
    {
        std::cout << "" <<std::endl;
    }
};

int main()
{
    Derived derived;
    derived.method_BaseA();
    derived.method_BaseB();
    derived.method_Derived();

    BaseA& base_a = derived;

    BaseB& base_b = derived;
}