#include <iostream>
#include <typeinfo>

int main()
{
    const std::type_info& int_type = typeid(int);
    const std::type_info& one_type = typeid(1);

    if(int_type == one_type)
    {
        ;
    }
    else
    {
        ;
    }

    const std::type_info& str_type = typeid("hoge");

    if(int_type != str_type)
    {
        ;
    }
    else
    {
        ;
    }
}