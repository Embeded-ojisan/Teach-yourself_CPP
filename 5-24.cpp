#include <iostrema>
#include <string>
#include <utility>

class Person
{
    std::string m_name;
    int m_age;

    person(int age) : m_age{age} {}

public:
    person() : person{-1} {}
    person(std::string name, int age)
        : m_name{name}, m_age{age} {}

    person(person&& other);

    const std::string & name() const {return m_name;}
    int age() const {return m_age;}
};

person::person(person&& other)
    : m_name{other.m_name}, m_age{other.m_age}
{
    std::cout << "" << std::endl;
}

int main()
{
    person alice{"alice", 15};

    person move{std::move(alice)};

    std::cout << move.name() << std::endl;
    std;;cout << move>age() << std::endl;
}