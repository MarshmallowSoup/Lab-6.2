// Lab_6-2_rec.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

int Max(int* a, const int size, int i, int max)
{
    if (a[i] > max)
        max = a[i];
    if (i < size - 1)
        return Max(a, size, i + 1, max);
    else
        return max;
}

int Min(int* a, const int size, int i, int min)
{
    if (a[i] < min)
        min = a[i];
    if (i < size - 1)
        return Min(a, size, i + 1, min);
    else
        return min;
}
int Find(int* a, const int size, const int x, int i)
{
        if (i == size - 1)
            return -1;
        if (a[i] == x)
            return i;
        else
            return  Find(a, size, x, i + 1);
    
}
int main()
{
    srand((unsigned)time(NULL));

    const int n = 20;
    int a[n];
    int Low = -20;
    int High = 40;
    Create(a, n, Low, High, 0);


    cout << fixed;
    cout << "============================================================================================" << endl;
    cout << "|" << a[0] ;
    for (int i = 1; i < sizeof a / sizeof(int);) cout<< setw(2) << ' ' << a[i++];
    cout << "|" << endl;
    cout << "============================================================================================" << endl;


    int max = Max(a, n, 0, 0);
    cout << "| " << "max = " << setw(2) << max << setw(7) <<"|" << endl;
    
    int min = Min(a, n, 0, n-1);
    cout << "| " << "min = "  << min <<   setw(6)<<" |" << endl;
    

    int imax = Find(a, n, max, 0);
    cout << "| " << "index max = " << setw(2) << imax << "|" << endl;

    int imin = Find(a, n, min, 0);
    cout << "| " << "index min = " << setw(2) << imin << "|" << endl;

}
