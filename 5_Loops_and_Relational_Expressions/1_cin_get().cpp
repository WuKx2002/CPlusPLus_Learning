#include <iostream>
#include <string>

const int Size = 50;

int main(void)
{
    using namespace std;
    char school[Size], name[Size];
    string grade;

    cout << "Enter your school: " << endl;
    cin.getline(school, Size);

    cout << "Enter your grade: " << endl;
    getline(cin, grade);

    cout << "Enter your name: " << endl;
    cin.get(name, Size).get();

    cout << "SCHOOL: " << school << endl;
    cout << "GRADE: " << grade << endl;
    cout << "NAME: " << name << endl;

    char ch;
    cout << "Enter your favorate food (# to quit): " << endl;
    cin.get(ch);
    int cnt;
    while (ch != '#')
    {
        cout << ch;
        cin.get(ch);
        cnt++;
    }
    cout << "(" << cnt << " Words" << ")" << endl;
    cin.get();

    cout << "Enter your favorate star (Ctrl+Z to quit): " << endl;
    cin.get(ch);
    while (!cin.fail())
    {
        cout << ch;
        cin.get(ch);
    }
    cin.clear();

    cout << "Enter your favorate sport(Ctrl+Z to quit): " << endl;
    cin.get(ch);
    while (cin)
    {
        cout << ch;
        cin.get(ch);
    }
    cin.clear();

    cout << "Enter your favorate flower(Ctrl+Z to quit): " << endl;
    while (cin.get(ch))
    {
        cout << ch;
        cin.get(ch);
    }
    cin.clear();



    return 0;
}