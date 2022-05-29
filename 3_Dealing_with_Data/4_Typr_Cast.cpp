#include <iostream>

int main(void)
{
    using namespace std;

    int a = 19.99;
    int b = 11.99;

    int c = a + b;  //int(19.99) +int(11.99) = 19 + 11 = 30;
    int d = 19.99 + 11.99; //int(19.99+11.99) = int(31.99) = 31;

    cout << c << endl
         << d << endl;

    char ch = 'A';
    cout << int(ch) << endl;

    float e = 9.99;
    cout << static_cast<int>(e) << endl;
    return 0;
}
