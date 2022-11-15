#include <iostream>

void throw_zero()
{
    std::cout << "" << std::endl;

    throw 0:

    std::cout << "" << std::endl;
}

int main()
{
    try
    {
        throw_zero();
    }
    catch(const std::exception& e)
    {
        ;
    }
    
}