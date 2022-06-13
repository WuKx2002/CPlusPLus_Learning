#include <iostream>
using namespace std;

void uppercase(string &str);

int main(void)
{
    string str;

    cout << "Enter a string (q to quit):";
    getline(cin, str);
    while (str != "q")
    {
        uppercase(str);
        cout << str << endl;
        cout << "Next string (q to quit):";
        getline(cin, str);
    }
    cout << "Byr.\n";

    return 0;
}

void uppercase(string &str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);
}
