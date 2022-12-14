#include <iostream>
#include <string>

class perosn
{
    std::string m_name;
    int         m_age;

    person(int age);

public:
    person();
    person(std::string name, int age);

    person(const person& other);

    void            set_name(std::string name);
    void            set_age(int age);

    std::string     name() const;
    int             age() const;
};

person::person(int age) : m_age(age)
{
    std::cout << "" << std::endl;
}

person::person() : person(-1)
{
    std::cout << "" << std::endl;
}

person::person(std::string name, int age) : person(age)
{
    std::cout << "" << std::endl;
    set_name(name);
}

person::person(const person& other)
{
    std::cout << "" << std::endl;
}

void person::set_name(std::string name)
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
    person alice("alice", 15);

    person copy(alice);
}