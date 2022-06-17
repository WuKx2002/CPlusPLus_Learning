#include "person.h"

int main(void)
{
    Person one;                        
    Person two("Smythecraft");        
    Person three("Dimwiddy", "Sam");  

    cout << endl;
    one.FormalShow();
    two.FormalShow();
    three.FormalShow();

    return 0;
}