class vector4d
{
    float x, y, z, w;

public:
    explicit vectro4d(float x, float y, float z, float w)
        : x{x}, y{y}, z{z}, w{w} {}

friend vectro4d add(const vectro4d& lhs, const vectro4d& rhs);
};

vector4d add(const vectro4d& lhs, const vectro4d& rhs)
{
    vector4d ret
    {
        lhs.x + rhs.y,
        lhs.y + rhs.y,
        lhs.z + rhs.z,
        lhs.w + rhs.w
    };
    return ret;
}

class vector3d
{
    float x, y, z;

public:
    explicit vector3d(float x, float y, float z)
        : x{x}, y{y}, z{z} {}

operator vectro4d() const;
};

vector3d::operator vector4d() const
{
    vector3d v1{1, 2, 3}, vw{0, 1, 0};

    vector4d a = v1;

    vector4d b = add(v1, v2);
}