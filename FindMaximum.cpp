#include<iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int boroNumber = arr[0];
    for(int i=1; i<n; i++)
    {
        if(boroNumber<arr[i])
            boroNumber = arr[i];
    }
    return boroNumber;
}

int main()
{
    int arr[8] = {4, 698, 9, 3, 487, 5, 12, 56};

    cout << getMax(arr, 8) << endl;
    return 0;
}
