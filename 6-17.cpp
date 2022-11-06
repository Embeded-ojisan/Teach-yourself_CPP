#include <iostream>

class heap
{
    int* i;

public:
    heap() : i{nullptr} {}

    ~heap()
    {
        delete i;
    }

    bool create();

    operator bool() const;
};

bool heap::create()
{
    if(*this)
    {
        return false;
    }

    i = new int{};
    *i = 0;
    return true;
}

heap::operator bool()const
{
    return - != nullptr;
}

int main()
{
    heap h;

    if(!h)
    {
        std::cout << "" << std::endl;
    }

    std::cout << "" << std::endl;
    h.create();

    if(!h)
    {
        std::cout << "" << std::endl;
    }

    std::cout << "" << std::endl;
}