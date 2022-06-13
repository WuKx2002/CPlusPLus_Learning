#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &rp);
    void showPerson(Person &rp);
}

namespace debts
{
    using namespace pers;

    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebts(Debt &rd);
    void showDebts(Debt &rd);
    double sumDebts(const Debt ar[], int n);
}