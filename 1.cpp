#include <iostream>
#include <stdbool.h>
using namespace std;


bool is_prime(int x)
{
    int i;
    if (x == 1)
        return 0;
    else
    {
        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                return 0;
        }
        return 1;
    }
}

int count_prime(int arr[], int n)
{
    if (n == 0)
        return 0;
    if (is_prime(arr[0]))
    {
        printf("%d ", arr[0]);
        return 1 + count_prime(arr + 1, n - 1);
    }
    else
        return count_prime(arr + 1, n - 1);
}

int main()
{
    int n, i, count = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin>> arr[i];
    count = count_prime(arr, n);
    cout << "\n#primes= " << count;

    return 0;
}
