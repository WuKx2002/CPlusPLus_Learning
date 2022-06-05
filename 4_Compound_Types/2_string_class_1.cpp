#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    
    //use string class to creat a string
    string str1;
    str1 = "Happy New Year";
    string str2 = "Happy birthday";

    cout << "str1:" << str1 << endl;
    cout << "length of str1 =" << str1.length() << endl;
    cout << "size of str1 =" << str1.size() << endl;
    cout << endl;

    cout << "str2:" << str2 << endl;
    cout << "length of str2 =" << str2.length() << endl;
    cout << "size of str2 =" << str2.size() << endl;
    cout << endl;

    cout << "Enter new str1:" << endl;
    cin >> str1;
    cout << "New str1:" << str1 << endl;
    cout << "length of str1 =" << str1.length() << endl;
    cout << endl;

    //assignment, concatenation, and appending based on string class
    string str3 = "abc";
    string str4 = str3; //assignment
    cout << str4 << endl;
    string str5 = str4 + str3;  //concatenation
    cout << str5 << endl;
    string str6 = str5;
    str6 += str5;    //appending
    cout << str6 << endl;

    return 0;
}
