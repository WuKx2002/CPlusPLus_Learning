#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[]);

int main(void)
{
    int arr1[5] = {1, 5, 3, 2, 4};
    double arr2[5]= {3.2, 4.3, 1.5, 6.8, 5.6};

    cout << "Max number in arr1 : " << max5(arr1) << ".\n";
    cout << "Max number in arr2 : " << max5(arr2) << ".\n";

    return 0;
}

template <typename T>
T max5(T arr[])
{
    T max = arr[0];
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}