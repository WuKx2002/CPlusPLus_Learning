#include <iostream>
#include <ctime>
#include <cstdlib>
#include "queue.h"
#include "customer.h"

using namespace std;

const int MIN_PRE_HR = 60;

bool newcustomer(double x);

int main(void)
{
    srand(time(0));
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PRE_HR * hours;

    cout << "Enter the average number of customers per hour: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    min_per_cust = MIN_PRE_HR / perhour;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;

    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))
        {
            if (line.isFull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);
                line.enQueue(temp);
            }
        }
        if (wait_time <= 0 && !line.isEmpty())
        {
            line.deQueue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line = line.queueCount();
    }

    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "          turnways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double)sum_line / cyclelimit << endl;
        cout << " average wait_time: "
             << (double)line_wait / served << " minutes\n";
    }
    else    
        cout << "No custumers!\n";
    cout << "Done!\n";

    return 0;
}

bool newcustomer(double x) 
{ 
    return (rand() * x / RAND_MAX < 1); 
}