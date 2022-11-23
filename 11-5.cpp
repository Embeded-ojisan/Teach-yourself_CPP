#include <cstdint>
#include <iostream>

extern "C" void unsafe_c_function(char *str)
{
    ;
}

void unsafe_interface_function(void *data)
{
    auto value = reinterpret_cast<std::intptr_t>(data);
    ;
}

int main()
{
    const int value = 72;
    const char message[] = "constant string";

    unsafe_c_function(const_cast<char*>(message));

    unsafe_interface_function(reinterpret_cast<void*>(
        static_cast(std::intptr_t(value))
    ));
}