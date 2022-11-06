#include <iostream>

int identity(int v)
{
    return v;
}

int square(int v)
{
    return v * v;
}

int main()
{
    int (&func)(int) = identitiy;

    std::cout << "" << func(4) << std::endl; 
}