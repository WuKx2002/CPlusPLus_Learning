#include "Cow.h"
#include <iostream>
#pragma warning(disable:4996)

Cow::Cow()
{
	m_name[0] = '\0';
	m_hobby = nullptr;
	m_weight = 0;
}

Cow::Cow(const char* name, const char* hobby, double weight)
{
	strncpy(m_name, name, 20);
	if (strlen(name) >= 20)
		m_name[19] = '\0';
	m_hobby = new char[strlen(hobby) + 1];
	strcpy(m_hobby, hobby);
	m_weight = weight;
}

Cow::Cow(const Cow& cow)
{
	strcpy(m_name, cow.m_name);
	m_hobby = new char[strlen(cow.m_hobby) + 1];
	strcpy(m_hobby, cow.m_hobby);
	m_weight = cow.m_weight;
}

Cow::~Cow()
{
	delete[] m_hobby;
}

Cow& Cow::operator=(const Cow& cow)
{
	if (this == &cow)
		return *this;
	delete[] m_hobby;
	
	m_hobby = new char[strlen(cow.m_hobby) + 1];
	strcpy(m_name, cow.m_name);
	strcpy(m_hobby, cow.m_hobby);
	m_weight = cow.m_weight;
	return *this;
}

void Cow::showCow() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << m_name << endl;
	cout << "Hobby:" << m_hobby << endl;
	cout << "Weight£º" << m_weight << endl;
}
