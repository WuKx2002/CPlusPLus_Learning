#include "person.h"
#include <cstring>

Person::Person(const string & ln, const char* fn)
{
    lname = ln;
    strcpy(fname, fn);
    
}
void Person::Show() const
{
    if (lname == "" && fname[0] == '\0')
    {
        cout<<"No Name."<<endl;
    }
    else
    {
        cout<<"Person Name: "<<fname<<"."<<lname<<endl;
    }
   
}
void Person::FormalShow() const
{
    if (lname == "" && fname[0] == '\0')
    {
        cout<<"No Name."<<endl;
    }
    else
    {
        cout<<"Person Name: "<<lname<<"."<<fname<<endl;
    }
}
