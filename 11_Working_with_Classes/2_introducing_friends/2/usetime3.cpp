#include <iostream>
#include "mytime3.h"

int main(void)
{
    using std::cout;
    using std::endl;
    Time A(2, 40);
    Time B;

    cout << A;
    cout << endl;
 
    B = 2.75 * A;
    cout << B;
    cout << endl;

    return 0;
}
