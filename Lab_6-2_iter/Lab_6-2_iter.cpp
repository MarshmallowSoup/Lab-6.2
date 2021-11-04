// Lab_6-2_iter.cpp 
//


#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

int Max(int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

int Min(int* a, const int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int Find(int* a, const int size, const int x)
{
    for (int i = 0; i < size; i++) {
        if (a[i] == x)
            return i;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 20;
    int a[n];
    int Low = -20;
    int High = 40;
    Create(a, n, Low, High);


    cout << fixed;
    cout << "===================================================================" << endl;
    cout << "|"  << a[0];
    for (int i = 1; i < sizeof a / sizeof(int);) cout << ' ' << a[i++];
    cout << "|" << endl;
    cout << "===================================================================" << endl;
   
    int min = Min(a, n);
    int max = Max(a, n);

    cout  <<"| " << "min = " << setw(2) <<  min << setw(6) << " |" << endl;
    cout << "| " << "max = " << setw(2) << max << setw(7) << "|" << endl;

    int imax = Find(a, n, max);
    int imin = Find(a, n, min);


    cout << "| " << "index max = " << setw(2) << imax << "|" << endl;
    cout << "| " << "index min = " << setw(2) << imin << "|" << endl;

}
