#include <iostream>

void printStr(const char *str);
void printStr(const char *str, int n);

int cnt = 1;

int main(void)
{
    using namespace std;

    char str[50];

    cin.getline(str, 50);
    printStr(str);
    printStr(str, 1);
    printStr(str, 1);
    printStr(str, 1);


    return 0;
}

void printStr(const char *str)
{
    using namespace std;
    cout << str << endl << endl;
}

void printStr(const char *str, int n)
{
    using namespace std;
    for (int i = 0; i < cnt; i++)
        cout << str << endl;
    cout << endl;
    cnt++;
}

