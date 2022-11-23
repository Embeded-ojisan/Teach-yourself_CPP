#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector v = {1, 2, 3};

    auto iter = std::find(v.begin(), v.end(), 2);
    if(iter != v.end)
    {
        ;
    }

    iter = std::fine_if(v.begin(), v.end(), [](int v){return v == 3;});
    if(iter != v.end())
    {
        ;
    }
}