#include <iostream>
#include <list>

void print_list(const std::list<int>& l)
{
    for(auto it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << "";
    }
    std::cout << std::endl;
}

int main()
{
    std::list il = {1, 2, 3};

    il.pop_back();

    il.push_back();

    il.push_back(3);

    il.push_front(0);

    il.pop_front(0);

    il.emplace_front(-1);
}