#include <iostream>
#include <fstream>  //ifstream oftream

int main(void)
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile; //creat object for output
    outFile.open("carinfo.txt"); //associate with a file

    cout << "Enter the the make and the automobile:\n";
    cin.getline(automobile, 50);
    cout << "Enter the model year:\n";
    cin >> year;
    cout << "Enter the original price:\n";
    cin >> a_price;
    d_price = a_price * 0.913;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking: " << a_price << endl;
    outFile << "Now asking: " << d_price << endl;

    return 0;
}