#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    std::vector v = {10, -3, 0, 4, 2};

    auto c = v;

    std::short(c.begin(), c.end());
    for(auto e : c)
    {
        ;
    }
    
    c = v;
    std::sort(c.begin(), c.end(), [](int r, int l){return l > r;});
    for(auto e : c)
    {
        ;
    }
}