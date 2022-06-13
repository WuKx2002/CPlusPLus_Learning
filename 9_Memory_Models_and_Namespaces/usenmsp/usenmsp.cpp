#include <iostream>
#include "namesp.h"
using namespace std;

void other(void);
void another(void);

int main(void)
{
    using debts::Debt;
    using debts::showDebts;

    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebts(golf);
    other();
    another();    

    return 0;
}

void other(void)
{
    using namespace debts;

    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];

    int i;
    for (i = 0; i < 3; i++)
        getDebts(zippy[i]);
    for (i = 0; i < 3; i++)
        showDebts(zippy[i]);
    cout << "Total debt: $ " << sumDebts(zippy, 3) << endl;
    return; 
}

void another(void)
{
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    cout << endl;

}
