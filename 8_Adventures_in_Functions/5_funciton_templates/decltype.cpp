/*
    USE decltype:

    int x;
    decltype(x) y;  // make y the same as x => y is type int

    ------1------

    double x = 5.5;
    double y = 7.9;
    double &rx = x;
    const double *pd;

    decltype(x) w;          // w is type double
    decltype(rx) u = y;     // u is type double &
    decltype(pd) v;         // v is type const double *

    ------2------

    long indeed(int);
    decltype(indeed(3)) m;  // m is type long

    ------3------

    double xx = 4.4;
    decltype(xx) w = xx;    // ww is type double
    decltype((xx)) r2 = xx; // r2 is double &

    ------4------

    int j = 3;
    int &k = j;
    int &n = j;

    decltype(j + 6) i1;     // i1 is type int
    decltype(100L) i2;      // i2 is type long
    decltype(k + n) i3;     // i3 is type int

    -------------

    C++ 11:
    auto h(int x, float y) -> double;

    ......

    auto h(int x, float y) -> double
    {
        ******function body******
    }

    ------------

*/

#include <iostream>
template <typename T1, typename T2>
auto ft(T1 x, T2 y) -> decltype(x + y)
{
    return  x + y;
}

int main(void)
{
    using namespace std;

    int x = 5;
    double y = 12.55;

    cout << ft(x, y) << endl;

    return 0;
}