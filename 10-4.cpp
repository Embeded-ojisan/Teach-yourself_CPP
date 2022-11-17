#include <iostream>

void throw_zero()
{
    throw 0;
}

int main()
{
    try
    {
        throw_zero();
    }
    catch(float f)
    {
        ;
    }
    catch(...)
    {
        ;
    }
    
}