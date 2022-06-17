#include <iostream>
#include "stock1.h"
using namespace std;

int main(void)
{
    cout << "************************************\n";
    cout << "Using constructors to creat new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();
    cout << endl;
    Stock stock2 = Stock("Boffo Objects", 2, 2.0);
    stock2.show();
    cout << "************************************\n";

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Lisintg stock1 and stock2:\n";
    stock1.show();
    cout << endl;
    stock2.show();
    cout << "************************************\n";

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done!\n";
    cout << "************************************\n";

    return 0;
}