#include <iostream>
#include <vector>

int main()
{
    std::vector v0 = {0, 2, 4, 6, 8};
    std::vector<int> v1;

    v1.assign(v0.begin(), v0.end());

    v0.assign(10, -1);

    v1.assign({1, 3, 5, 7, 9});
}