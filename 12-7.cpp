#include <iostream>
#include <vector>

int main()
{
    std::vector iv = { 1, 2, 3, 4, 5};

    iv.resize(4);

    iv.resize(6, -1);

    for(int i : iv)
    {
        std::cout << i << std::endl;
    }
}