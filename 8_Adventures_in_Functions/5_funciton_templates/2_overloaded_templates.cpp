#include <iostream>
#include <typeinfo>

const int Lim=  8;

template <typename T>
void Swap(T &a, T &b);

void Show(int arr[], int n);

template <typename T>
void Swap(T a[], T b[], int n);

int main(void)
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << "\n";
    Swap(i, j);
    cout << "After swap, "<< "i = " << i << ", j = " << j << "\n\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x = " << x << ", y = " << y << "\n";
    Swap(x, y);
    cout << "After swap, "<< "x = " << x << ", y = " << y << "\n\n";

    int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Original arrays: \n";
    Show(d1, Lim);
    Show(d2, Lim);
    Swap(d1, d2, Lim);
    cout << "After swap: \n";
    Show(d1, Lim);
    Show(d2, Lim);
   
    return 0;
}

template <typename T>
void Swap(T &a, T &b) 
{
    T temp;

    temp = a;
    a = b;
    b = temp;
    std::cout << "typeof T: " << typeid(temp).name() << ", using Swap function: \n";
}

template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;

    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
void Show(int arr[], int n)
{
    using namespace std;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}