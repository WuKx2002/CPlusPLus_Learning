#include "functions.h"

Book::Book(string name, string author, double price)
{
    m_name = name;
    m_author = author;
    m_price = price;
}

void Book::showBookInfo(void)
{
    cout << "Name : " << m_name << endl
         << "Author : " << m_author << endl
         << "Price : " << m_price << endl << endl;
}

Book::~Book()
{
}

/**************************************************/

StudentGrade1::StudentGrade1()
{
    name = "Unknow";
    Chinese = math = English = 0;
}

StudentGrade1::~StudentGrade1()
{

}

void StudentGrade1::inputInfo()
{
    cout << "Input name : ";
    getline(cin, name);
    cout << "Input Chinese scores : ";
    cin >> Chinese;
    cout << "Input math scores : ";
    cin >> math;
    cout << "Input English scores : ";
    cin >> English;
}
    
void StudentGrade1::showInfo()
{
    cout << "Name : " << name << endl
         << "Chinese : " << Chinese << endl
         << "Math : " << math << endl 
         << "English : " << English << endl << endl;
}

/**************************************************/

StudentGrade2::StudentGrade2(string name, int Chinese, int math, int English)
{
    name_ = name;
    Chinese_ = Chinese;
    math_ = math;
    English_ = English;
}

StudentGrade2::~StudentGrade2()
{

}

void StudentGrade2::inputInfo()
{
    cout << "Input name : ";
    getline(cin, name_);
    cout << "Input Chinese scores : ";
    cin >> Chinese_;
    cout << "Input math scores : ";
    cin >> math_;
    cout << "Input English scores : ";
    cin >> English_;
}
    
void StudentGrade2::showInfo()
{
    cout << "Name : " << name_ << endl
         << "Chinese : " << Chinese_ << endl
         << "Math : " << math_ << endl 
         << "English : " << English_ << endl << endl;
}

/**************************************************/