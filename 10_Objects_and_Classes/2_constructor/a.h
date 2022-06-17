#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include <string>
#include <iostream>
using namespace std;

class Book
{
private:
    string m_name;
    string m_author;
    double m_price;
public:
    Book(string name, string author, double price);
    void showBookInfo();
    ~Book();
};

class StudentGrade1
{
private:
    string name;
    double Chinese;
    double math;
    double English;
public:
    StudentGrade1();
    void inputInfo();
    void showInfo();
    ~StudentGrade1();
};

class StudentGrade2
{
private:
    string name_;
    double Chinese_;
    double math_;
    double English_;
public:
    StudentGrade2(string name = "Unknown", int Chinese = 0, int math = 0, int English = 0);
    void inputInfo();
    void showInfo();
    ~StudentGrade2();
};

#endif