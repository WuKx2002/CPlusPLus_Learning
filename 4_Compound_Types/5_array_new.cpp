#include <iostream>

int main(void)
{
    using namespace std;

    double *p3 = new double [3];
    
    p3[0] = 0;
    p3[1] = 1;
    p3[2] = 2;
    cout << "*p3 = p3[0] = " << *p3 << ".\n";
    p3 = p3 + 1;
    cout << "*p3 + 1 = p3[1] = " << *p3 + 1 << ".\n";
    delete [] p3;


    return 0;
}