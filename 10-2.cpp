#include <iostream>

void show_zero()
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
    catch(int i)
    {
        ;
    }
    catch(char c)
    {
        ;
    }
    catch(int i)
    {
        ;
    }
    
}