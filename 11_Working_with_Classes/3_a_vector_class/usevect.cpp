#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
using namespace std;
using VECTOR::Vector;

int main(void)
{
    srand(time(0));
    double direction;
    Vector step;
    Vector res(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> target))
            break;
        while (res.magval() < target)
        {
            direction = rand()%360;
            step.reset(dstep, direction, Vector::POL);
            res  = res + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
             "has the following location:\n";
             cout << res << endl;
        res.polar_mode();
        cout << " or\n" << res << endl;
        cout << "Average outward distance per step = "
             << res.magval() / steps << endl;
        steps = 0;
        res.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}