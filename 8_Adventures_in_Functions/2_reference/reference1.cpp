#include <iostream>

int main(void)
{
    using namespace std;

    int rats = 0;
    int & rodents = rats;

    /***** Wrong *****
    
    int & rodents;
    rodents = rats;

    ***** Wrong *****/
    
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl << endl;
    
    rats++;
    cout << "rats++" << endl;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl << endl;

    rodents++;
    cout << "rodents++" << endl;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl << endl;

    cout << "&rats = " << &rats << endl;
    cout << "&rodents = " << &rodents << endl << endl;


    return 0;
}