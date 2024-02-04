#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n = abs(n);

    int digits[4];

    digits[0] = n / 1000;
    digits[1] = n / 100 % 10;
    digits[2] = n / 10 % 10;
    digits[3] = n % 10;

    cout << *max_element(digits, digits + 4);
}