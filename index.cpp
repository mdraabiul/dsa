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
        ans = bit * pow(10, i) + ans;

        n = n >> 1;
        i++;
    }
    cout << ans << endl;
}

int main()
{
    decimalToBinary();
}