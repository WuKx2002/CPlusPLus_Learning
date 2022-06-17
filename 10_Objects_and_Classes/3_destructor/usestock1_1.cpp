#include <iostream>
#include "stock1.h"
using namespace std;

int main(void)
{
    const Stock land = Stock("Kludgegorn Properties", 20, 25.0);
    land.show();

    return 0;
}