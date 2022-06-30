#ifndef __STR_H__
#define __STR_H__

#include <iostream>
using std::istream;
using std::ostream;

class String
{
private:
    char *str_;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:

    //constructor & destructor
    String(const char *str);
    String(const String &str);
    String();
    ~String();

    //overloaded operator----method
    String &operator=(const char *str);
    String &operator=(const String &str);
    char &operator[](int index);
    const char &operator[](int index) const;

    //overloaded operator----frined
    friend bool operator<(const String str1, const String str2);
    friend bool operator>(const String str1, const String str2);
    friend bool operator==(const String str1, const String str2);
    friend ostream &operator<<(ostream &os, const String &str);
    friend istream &operator>>(istream &is, String &str);

    //static function
    static int HowMany();

};


#endif // __STR_H__
