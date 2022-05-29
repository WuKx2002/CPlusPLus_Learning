#include <iostream>

int main(void)
{
    using namespace std;
    int a = 2021;
    int b(2023);
    int c = {2024}; //C++98 only
    int d{2025};    //C++11 only
    int e = {};     //C++11 only, e will be initialized to 0.
    int f{};        //C++11 only, f will be initialized to 0.
    
    cout << a << endl
         << b << endl 
         << c << endl
         << d << endl
         << e << endl
         << f << endl;
    //C++ enable large brackets to initialize any type of data, which is a common initialzation method. 
    
    return 0;
}
