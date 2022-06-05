#include <iostream>

int main(void)
{
    using namespace std;

    int ival = 1001;
    int *pt = new int;
    *pt = ival;

    cout << "ival = " << *pt << ", location: " << pt << endl;
    cout << "sizeof(ival) = " << sizeof(ival) << " , sizeof(pt) = " << sizeof(pt) << endl;

    double dval = 1001.1;
    double *pd;
    pd = new double;

    cout << "dval = " << *pd << ", location: " << pd << endl;
    cout << "sizeof(dval) = " << sizeof(dval) << " , sizeof(pd) = " << sizeof(pd);

    delete pt;
    delete pd;
    
    return 0;
}
