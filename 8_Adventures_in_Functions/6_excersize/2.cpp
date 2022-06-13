#include <iostream>
#include <string>

struct CandyBar
{
    std::string bandName;
    double weight;
    int calories;
};

void setStruct(CandyBar &Candy, const char *bandName = "Millennium MMunch",
                const double weight = 2.85, const int calories = 350);
void showStruct(CandyBar Candy);

int main(void)
{
    using namespace std;
    CandyBar Candy;
    
    setStruct(Candy);
    showStruct(Candy);
    setStruct(Candy, "Nestle", 1.2, 200);
    showStruct(Candy);

    return 0;
}

void setStruct(CandyBar &Candy, const char *bandName,
                const double weight, const int calories)
{
    Candy.bandName = bandName;
    Candy.weight = weight;
    Candy.calories = calories;
}

void showStruct(CandyBar Candy)
{
    using namespace std;
    cout << Candy.bandName << endl;
    cout << Candy.weight << endl;
    cout << Candy.calories << endl;
    cout << endl;
}