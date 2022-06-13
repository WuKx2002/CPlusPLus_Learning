#include <iostream>

struct Job
{
    char name[40];
    double salary;
    int floor;
};

template <typename T>
void Swap(T &a, T &b);
template <> void Swap<Job>(Job &j1, Job &j2);
void Show(Job &j);

int main(void)
{
    using namespace std;

    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i = " << i << ", j = " << j << ".\n";
    cout << "Using compliler-generated int swapper:\n";
    Swap(i ,j);

    Job sue = {"Susan Yaffee", 73000.60, 7};
    Job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "Before JOb swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);
    
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

template <> void Swap<Job>(Job &j1, Job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;

}

void Show(Job &j)
{
    std::cout << j.name << ":$" << j.salary
              << " on floor " << j.floor << std::endl;
}