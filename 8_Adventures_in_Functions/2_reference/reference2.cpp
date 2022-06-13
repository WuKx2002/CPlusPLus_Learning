#include <iostream>

int main(void)
{
    using namespace std;

    int a = 50;
    int & b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl << endl;

    int c = 100;
    b = c; //assignment, b is still associated with a
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    cout << "&c = " << &c << endl << endl;



    


    return 0;
}