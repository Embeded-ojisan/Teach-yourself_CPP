#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() {}
};

class DerivedA : public Base
{
};

class DerivedB : public Base
{
};

void determine_class(const Base& obj)
{
    const std::type_info& obj_type = typeid(obj);

    if(obj_type == typeid(DerivedA))
    {
        ;
    }
    else if(obj_type == typeid(DerivedB))
    {
        ;
    }
    else
    {
        ;
    }
}

class DerivedC : public Base
{
};

int main()
{
    DerivedA a;
    determine_class(a);

    DerivedB b;
    determine_class(b);

    DerivedC
    determine_class(c);
}