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

void String::Stringlow()
{
	for (int i = 0; i < len; i++)
		str[i] = tolower(str[i]);
}

void String::Stringup()
{
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);// TODO: 在此处插入 return 语句
}

String operator+(const String& st1, const String& st2)
{
	String res_st;
	res_st.len = st1.len + st2.len;
	res_st.str = new char[res_st.len + 1];
	strcpy(res_st.str, st1.str);
	strcat(res_st.str, st2.str);
	return res_st;
}

String operator+(const char* s1, const String& st2)
{
	String res_st;
	res_st.len = strlen(s1) + st2.len;
	res_st.str = new char[res_st.len + 1];
	strcpy(res_st.str, s1);
	strcat(res_st.str, st2.str);
	return res_st;
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

