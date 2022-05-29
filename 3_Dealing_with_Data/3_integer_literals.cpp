#include <iostream>

int main(void)
{
    using namespace std;     //oct, hex can't use as variable name.

    //cout is an integer in decimal format by defaut
    int a = 042;    //in octal
    int b = 0x42;   //in hex

    cout << a << endl;
    cout << b << endl;
    
    cout << oct;    //modify the way cout shows an integer
    cout << a << endl;
    cout << hex;
    cout << b << endl;
    
    //char
    char c1 = 'M';
    cout << c1 << endl;
    cout.put(c1) << endl;
    //Out:
    //M
    //M

    char c2 = 65;
    cout.put(c2) << endl;
    //Out:
    //A

    int c3 = 65;
    cout.put(c3);
    cout << c3 << endl;
    //Out:
    //A
    //65
    
    cout << 'A' << endl;
    //Out:
    //A
    return 0;
}
