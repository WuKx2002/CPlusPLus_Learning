#include <iostream>
#include <cstring>
using namespace std;

template <typename T> T maxn(T arr[], int n);
template <> char *maxn<char *>(char *sst[], int n);

int main(void)
{
    int arr1[6] = {1, 5, 3, 2, 4, 6};
    double arr2[4]= {4.3, 1.5, 6.8, 5.6};
    string ss[] = {"Hello", "Hello World!"};

    cout << "Max element in arr1 : " << maxn(arr1, 6) << ".\n";
    cout << "Max element in arr2 : " << maxn(arr2, 4) << ".\n";
    cout << "Max element of string : " << maxn(ss, 2) << ".\n";

    return 0;
}

template <typename T> T maxn(T arr[], int n)
{
    T max = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

template <> char *maxn<char *>(char *sst[], int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (strlen(sst[pos]) < strlen(sst[i]))
            pos = i;
    }
    return sst[pos];
}