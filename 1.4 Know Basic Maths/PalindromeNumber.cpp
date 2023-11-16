#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    // Write your code here
    int reverse = 0, rem = 0, temp = n;
    while (n)
    {
        rem = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + rem;
    }
    return temp == reverse;
}

int main()
{
    int n;
    cin >> n;
    cout << palindrome(n) << endl;
    return 0;
}