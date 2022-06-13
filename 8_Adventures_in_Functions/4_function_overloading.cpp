#include <iostream>

const int ArSize = 80;
char * left(const char *str, int n = 1);
unsigned long left(unsigned long num, unsigned int ct);

int main(void)
{
    using namespace std;
    char sample[ArSize];

    const char *trip = "Hawaii!!";
    unsigned long n = 12345678;
    int i;
    char *temp;

    for (i = 0; i < 10; i++)
    {
        cout << left(n, i) <<endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp;
    }
    return 0;
}

char * left(const char *str, int n)
{
    if (n < 0)
        n = 0;
    
    int m = 0;

    /*The expression str[m] != '\0' evaluates to true when str[m] is not the null character and to false when it is the null character.*/
    while (m <= n && str[m])
        m++;

    char *p = new char [n+1];
    int i;

    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    
    return p;
}

unsigned long left(unsigned long num, unsigned int ct)
{
    unsigned long n = num;
    unsigned int digits = 1;

    if (num == 0 || ct == 0)
        return 0;

    while (n /= 10)
        digits++;
    
    if (digits > ct)
    {
        ct = digits - ct;
        while(ct--)
            num /= 10;
        return num;
    }
    else
    {
        return num;
    }
    
}