#include <iostream>

void swapr(int &a,int &b);
inline int cube(const int &x) { return (x * x * x); }

int main(void)
{
    using namespace std;

    int a, b;

    cout << "Enter number a :";
    cin >> a;
    cout << "Enter number b :";
    cin >> b;

    cout << "Using reference to swap contents." << endl;
    swapr(a, b);

    /*Infact:
    inline void std::swap<int, 0>(int &, int &) 
    noexcept(true)*/

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
  
    cout << "cube(a) = " << cube(a) << endl;
    cout << "cube(b) = " << cube(b) << endl;

    return 0;
}

void swapr(int &a,int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}