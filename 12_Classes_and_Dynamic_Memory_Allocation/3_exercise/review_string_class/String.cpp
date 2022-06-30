#pragma warning(disable : 4996)
#include "String.h"
#include <cstring>
using namespace std;

int String::num_strings = 0;
String::String()
{
	str = new char[1];
	str[0] = '\0';
	len = 0;
	num_strings++;
}

String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
}

String::String(const String& st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	num_strings++;

}

String::~String()
{
	delete[] str;
	num_strings--;
}

String& String::operator=(const char* s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

String& String::operator=(const String& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
