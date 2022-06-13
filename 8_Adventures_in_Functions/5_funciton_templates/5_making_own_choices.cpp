#include <iostream>
#include <cmath>

template <class T>
T lesser(T a, T b)
{
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    a = abs(a);
    b = abs(b);
    return a < b ? a : b;
}

int main(void)
{
    using namespace std;

    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;
    cout << lesser(x, y) << endl;
    cout << lesser<>(m, n) << endl;
    cout << lesser<int>(x, y) << endl;

    return 0;
}