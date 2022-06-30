#include <iostream>
#include "mytime2.h"

int main(void)
{
    using std::cout;
    using std::endl;
    Time A(2, 40);
    Time B;

    A.Show();
    cout << endl;
 
    B = 2.75 * A;
    B.Show();
    cout << endl;

    return 0;
}
