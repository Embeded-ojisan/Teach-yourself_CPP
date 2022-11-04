#include <iostrem>
#include <string>

class Object
{
    std::string name;

public:
    Object() : Object("NO NAME") {}
    explicit Object(std::string name) : name(name) {}
    ~Object();

    void show_name() const;
};

Object::~Object()
{
    std::cout<< "" << std::endl;
}

void Object::show_name() const
{
    std::cout << "" << name << std::endl;
}

int main()
{
    Object* obj = new Object[10]
    {
        Object{"first"},
        Object{"second"},
    };

    obj[0].show_name();
    obj[1].show_name();
    obj[2].show_name();

    delete [] obj;
}