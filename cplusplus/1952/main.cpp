#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int grades[n];

    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];
    }

    int min = *min_element(grades, grades + n);
    int max = *max_element(grades, grades + n);

    for (int i = 0; i < n; i++)
    {
        if (grades[i] == max) grades[i] = min;
        cout << grades[i] << ' ';
    }
}