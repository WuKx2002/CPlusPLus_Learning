#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	enum { CINLIM = 80 };
public:
	//constructors
	String();
	String(const char* s);
	String(const String& st);
	//destructor
	~String();
	
	//overloaded operator methods(=, [], <, >, ==, <<, >>)
	String& operator=(const char* s);
	String& operator=(const String& st);
	char& operator[](const int i) { return str[i]; }
	const char& operator[](const int i) const { return str[i]; }
	friend bool operator<(const String& st1, const String& st2) { return strcmp(st1.str, st2.str); }
	friend bool operator>(const String& st1, const String& st2) { return st2 < st1; }
	friend bool operator==(const String& st1, const String& st2) { return strcmp(st1.str, st2.str) == 0; }
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);

	//other function
	int length() const { return len; }
	static int HowMany() { return num_strings; }
};

