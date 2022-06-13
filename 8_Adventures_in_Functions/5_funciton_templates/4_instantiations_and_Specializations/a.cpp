#include "a"

template <typename T>
void f(T i);

template void f<int>(int i);

int main(void)
{
    i = 1;
    f(i);
    double j = 2.2;
    f(j);
    return 0;
}

template <typename T>
void f(T i)
{
    i = 2;
}