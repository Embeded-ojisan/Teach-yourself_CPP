#include <iostream>

struct vector2d
{
    int x;
    int y;
};

class Vec2
{
    int m_x;
    int m_y;

public:
    int getX() const { return m_x; }
    int getY() const { return m_y; }

    void setX(int x) { m_x = x; }
    void setY(int y) { m_y = y; }
}

template <typename <Vector>
void show_vector(Vector v);

template <>
void show_vector(Vec2 v)
{
    std::cout << "" << std::endl;
}

template <typename Vector>
void show_vector(Vector v)
{
    std::cout << "" << std::endl;
}

int main()
{
    vector2d st{10, 20};

    show_vector<vector2d>(st);

    Vec2 cl;
    cl.setX(-20);
    cl.setY(-10);

    show_vector<Vec2>(cl);
}