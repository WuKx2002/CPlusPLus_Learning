#include "plorg.h"

int main(void)
{
    Plorg pl;
    pl.print_info();
    pl.reset_ci(98);
    pl.print_info();
    Plorg pm("Stenom",87);
    pm.print_info();

    return 0;
}