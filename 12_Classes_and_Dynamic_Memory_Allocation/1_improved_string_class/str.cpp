#include "str.h"
#include <cstring>
using std::cin;
using std::cout;

String::String(const char *str)
{
    len = strlen(str);
    str_ = new char[len + 1];
    strcpy(str_, str);
    num_strings++;    
}

String::String(const String &str)
{
    len = str.len;
    str_ = new char[len + 1];
    strcpy(str_, str.str_);
    num_strings++;    
}


String::String()
{
    len = 0;
    str_ = new char[1];
    str_[0] = '\0';
    num_strings++;
}

String::~String()
{
    --num_strings;
    delete [] str_;
}


String& String::operator=(const char *str)
{
    delete [] str_;
    len = strlen(str);
    str_  = new char[len + 1];
    strcpy(str_, str);
    return *this;
}

String& String::operator=(const String &str)
{
    if (this == &str)
        return *this;
    delete [] str_;
    len = str.len;
    str_ = new char[len + 1];
    strcpy(str_, str.str_);
    return *this;
}

char& String::operator[](int index)
{
    return str_[index];
}

const char& String::operator[](int index) const
{
    return str_[index];
}

bool operator<(const String str1, const String str2)
{
    return (strcpy(str1.str_, str2.str_) < 0);
}

bool operator>(const String str1, const String str2)
{
    return str2 < str1;
}

bool operator==(const String str1, const String str2)
{
    return (strcpy(str1.str_, str2.str_) == 0);
}

istream& operator>>(istream &is, String &str)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        str = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

ostream& operator<<(ostream &os, const String &str)
{
    os << str.str_;
    return os;
}




