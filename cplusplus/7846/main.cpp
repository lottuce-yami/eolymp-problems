#include <iostream>

using namespace std;

int main()
{
    int n, x, max = 0, index;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > max) {
            max = x;
            index = i + 1;
        }
    }

    cout << max << ' ' << index;
}