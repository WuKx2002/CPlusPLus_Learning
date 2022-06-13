#include "functions.h"

int main(void)
{
    Book b1("C++", "Stephen", 118.00);
    b1.showBookInfo();

    Book b2 = Book("the Beauty of Math", "Wu Jun", 69);
    b2.showBookInfo();

    StudentGrade1 s1;
    s1.showInfo();
    s1.inputInfo();
    s1.showInfo();
    cin.get();

    StudentGrade2 s2;
    s2.showInfo();
    s2.inputInfo();
    s2.showInfo();

    return 0;
}