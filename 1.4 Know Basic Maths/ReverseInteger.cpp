#include <bits/stdc++.h>
using namespace std;

int reverseInteger(int n)
{
    int reverseNumber = 0;
    while (n)
    {
        int rem = n % 10;
        n = n / 10;
        reverseNumber = (reverseNumber * 10) + rem;
    }
    return reverseNumber;
}

int main()
{
    int n;
    cin >> n;
    cout << reverseInteger(n);
    return 0;
}