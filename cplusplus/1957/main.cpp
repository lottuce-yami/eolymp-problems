#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, x, gold, silver;
    cin >> n;

    int points[n];

    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }

    sort(points, points + n);

    for (int i = n - 2; i >= 0; i--)
    {
        if (points[i] != points[n - 1]) {
            cout << points[i];
            break;
        }
    }
}