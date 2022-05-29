#include <iostream>

int main(void)
{
    using namespace std;
    
    //pracite cout
    //an object created with the properties of the ostream ,defined in iostream.
    cout << "Line 1";
    cout << endl;
    
    cout << "Line 2\n";

    cout << "Line 3" << endl;

    int month, day, year;

    month = 5;
    day = 27;
    year = 2022;

    cout << "Month :  ";
    cout << month << endl;

    cout << "Day : " << day << endl;    //good
    cout << "Year : " << year << endl;  //good

    cout << "My mother is a kind women"
         << endl
         << "My father is a kind men"
         << endl
         << "I am a kind boy"
         << endl;   //good

    //practice cin
    //an object created with the properties of the istream, defined in iostream.
    int age;
    cout << "How old are you : ";
    cin >> age;
    cout << "Age : "<< age <<endl;
    

    return 0;
}
