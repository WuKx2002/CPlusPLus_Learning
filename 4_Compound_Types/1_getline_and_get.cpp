#include <iostream>

int main(void)
{
    using namespace std;
    
    const int Size = 20;
    char name1[Size];
    char name2[Size], name3[Size];
    char name4[Size], name5[Size];
    char name6[Size], name7[Size];

    cout << "Enter name1 : " << endl;
    cin.getline(name1, Size);
    cout << "name1 : " << name1 << endl;

    cout << "Enter name2 and name3 (Two Lines): " << endl;
    cin.get(name2, Size);
    cin.get();
    cin.get(name3, Size).get();
    cout << "name2 and name3 : " << endl
         << name2 << endl
         << name3 << endl;

    cout << "Enter name4 and name5 (Two Lines): " << endl;
    cin.get(name4, Size).get();
    cin.get(name5, Size);
    cout << "name4 and name5 : " << endl
         << name4 << endl
         << name5 << endl;

    cout << "Enter name6 and name7 (Two Lines): " << endl;
    cin.get();
    cin.getline(name6, Size).getline(name7, Size);


    return 0;
}
