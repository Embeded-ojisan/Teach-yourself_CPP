#include <iostream>
#include <string>

class person
{
    std::string m_name;
    int age;

public:
    person();

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int age() const;
};

person::person() : m_age(-1)
{
    std::cout << "" << std::endl;
}

void person::setname(std::string name)
{
    m_name = name;
}

void person::set_age(int age)
{
    m_age = age;
}

std::string person::name() const
{
    return m_name;
}

int person::age() const
{
    return m_age;
}

int main()
{
    person bob;

    std::cout << "" << bob.age() << std::endl;
    bob.set_name("bob");
    bob.set_ge(20);

    std::cout << "" << bob.name() << std::endl;
    std::cout << "" << bob.age() << std::endl;
}