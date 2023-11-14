#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int digitsDivide = 0, temp = n;
    while (n)
    {
        if (n % 10 == 0)
        {
            // digitsDivide++;
            n = n / 10;
        }
        else
        {
            int r = n % 10;
            cout << temp << "%" << r << "=>" << temp % r << endl;
            if (temp % r == 0)
                digitsDivide++;
            n = n / 10;
        }
    }
    return digitsDivide;
}

int main()
{
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}