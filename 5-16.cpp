#include <iostream>

class Marker
{
    Marker();
    ~Marker();
};

Marker::Marker()
{
    std::cout << "" << this << std::endl;
}

Marker::~Marker()
{
    std::cout << "" << this << std::endl;
}

void copy(Marker m)
{
    std::cout << "" << &m << std::endl
}

void reference(const Marker& m)
{
    std::cout << "" << &m << std::endl;
}

int main()
{
    Marker m;
}