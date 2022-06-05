#include <iostream>
#include <string>
#include <cstring>
int main(void)
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr begore input: "
         << strlen(charr) << endl;
    cout << "Length of string in str begore input: "
         << str.size() << endl;

    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You Entered: " << charr << endl;

    cout << "Enter a new line of text:\n";
    getline(cin, str);
    cout << "You Entered: " << str << endl;

    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    return 0;
}
