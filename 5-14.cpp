class A
{
    int m, v;
    std::string m_n;

public:
    A(int, std::string);
    A(float);
};

A::A(int v, std::string n)
    : m_v(v)
    . m_n{n}
{
}

A::A(float)
    : A{-1, "float"}
{
}

int main()
{
    A ap(42, "0");
    A ab{42, "0"};

    A bp = A(42, "0");
    A bb = A{42, "0"};

    A cp = (42, "0");
    A cb = {42, "0"};

    A dp = (42, 0.0);
    A db = {42, 0.0};

    double pi = 3.14159;
    A ep(pi);
    A eb{pi};
}