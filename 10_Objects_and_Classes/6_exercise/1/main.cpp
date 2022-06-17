#include "account.h"
using namespace std;

int main(void)
{
    Account member1("Zhang San", "123456789", 800000);
    member1.show();
    member1.deposit(100000);
    member1.show();
    member1.withdraw(100000);
    member1.show();

    return 0;
}