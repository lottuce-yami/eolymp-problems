#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int sum = 0;

    vector<int> digits;

    while (n) {
        digits.push_back(n % 10);
        n /= 10;
    }

    cout << *max_element(digits.begin(), digits.end());
}