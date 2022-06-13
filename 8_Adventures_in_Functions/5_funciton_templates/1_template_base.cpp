#include <iostream>
#include <typeinfo>

template <typename T>
void Swap(T &a, T &b);

int main(void)
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << "\n";
    Swap(i, j);
    cout << "After swap, "<< "i = " << i << ", j = " << j << "\n\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x = " << x << ", y = " << y << "\n";
    Swap(x, y);
    cout << "After swap, "<< "x = " << x << ", y = " << y << "\n\n";


    return 0;
}

template <typename T>
void Swap(T &a, T &b) 
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "typeof T: " << typeid(temp).name() << ", using Swap function: \n";
}
