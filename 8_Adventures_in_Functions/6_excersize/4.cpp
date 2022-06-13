#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char *str;
    int ct; //lengh of str
};

void set(stringy &sty, char *st);
void show(const stringy &sty, int n = 1);
void show(const string &str, int n = 1);

int main(void)
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void set(stringy &sty, char *st)
{
    sty.ct = strlen(st);
    sty.str = new char[sty.ct];
    strcpy(sty.str, st);
}

void show(const stringy &sty, int n)
{
    while (n--)
        cout << sty.str << endl;
}

void show(const string &str, int n)
{
    while (n--)
        cout << str << endl;  
}