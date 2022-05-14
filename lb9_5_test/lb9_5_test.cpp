#include <iostream>
using namespace std;

int BigSum(int arr[], int n)
{
    int* mas = new int[n];
    mas = arr;
    int sum = 0;
    int big = 0;
    int tek = 0;
    for (int i = 0; i < n; i++)
    {
        tek = mas[i];
        while (tek != 0)
        {
            sum += tek % 10;
            tek /= 10;
        }
        cout << mas[i] << " = " << sum << '\n';
        if (sum > big)
        {
            big = sum;
        }
        sum = 0;
    }
    cout << "Big sum = " << big << '\n';
    return big;
}


int main()
{
    const int n = 5;
    int arr[n] = { 12,43,99,12,32 };
    BigSum(arr, n);
    return 0;
}