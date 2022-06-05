#include <iostream>
#include <vector>
#include <array>

int main(void)
{
    using namespace std;

    //C, original C++
    double ao[4] = {1.2, 2.4, 3.6, 4.8};
    //C++98 STL
    vector<double> av(4);
    //no simple way to initialize in C++98
    av[0] = 1.0/3.0;
    av[1] = 1.0/5.0;
    av[2] = 1.0/7.0;
    av[3] = 1.0/9.0;
    //C++11
    array<double, 4> aa1 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> aa2 = aa1;
    //output
    cout << "ao[0] = " << ao[0] << ", at " << &ao[0] << endl;
    cout << "av[0] = " << av[0] << ", at " << &av[0] << endl;
    cout << "av.at(0) = " << av.at(0) << ", at " << &av.at(0) << endl;  //use function at()
    cout << "aa1[0] = " << aa1[0] << ", at " << &aa1[0] << endl;
    cout << "aa2[0] = " << aa2[0] << ", at " << &aa2[0] << endl;

    return 0;
}