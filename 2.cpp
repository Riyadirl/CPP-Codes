#include <iostream>
using namespace std;

int isPalindrome(int num)
{
    if (num == reverse(num))
    {
        return 1;
    }
    return 0;
}

int reverse(int num)
{
    int digit = (int)log10(num);
    if (num == 0)
    {
        return 0;
    }
    return ((num %10 *pow(10, digit)) + reverse(num /10));
}

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (isPalindrome(num) == 1)

    {
        cout<<"is palindrome number\n"<< num;
    }
    else
    {
        cout<< "is NOT palindrome number.\n"<< num;
    }

    return 0;
}
