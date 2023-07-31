#include<iostream>
using namespace std;

bool isPalindrome(int num)
{
    int count = num;
    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    return rev = count;
}

int main()
{
    int n = 121;
    if (isPalindrome(n))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
