#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary()
{
    int n;
    cout << "Type the value of n? " << endl;
    cin >> n;

    int i = 0;
    int ans = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i));

        n = n >> 1;
        i++;
    }
    cout << ans << endl;
}

int binaryToDecimal()
{
    int n;
    cout << "Type the value of n? " << endl;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;
}

int reverseInteger()
{
    int n = 357;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    cout << ans << endl;
}

int fibonacciNums()
{
    int n;
    cout << "Type the value of n? " << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    int sum;
    for (int i = 0; i <= n; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}

int main()
{
    // decimalToBinary();
    // binaryToDecimal();
    // reverseInteger();
    fibonacciNums();
}

// uttora - 12 no sector, road no 17, house 19, lifter 5 tola