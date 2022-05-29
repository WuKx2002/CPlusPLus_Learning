#include <iostream>

void print_age(int birth_year);

int main(void)
{
    using namespace std;

    int birth_year;

    cout << "Enter your birth year : ";
    cin >> birth_year;

    print_age(birth_year);

    return 0;
}

void print_age(int birth_year)
{
    using namespace std;

    int age = 2022 - birth_year;

    cout << "You are "<< age << " years old" << endl;
}
