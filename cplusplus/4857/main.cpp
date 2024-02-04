#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int m;
    int students[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> students[i];
    }

    cin >> m;

    cout << ceil(1.0 * *max_element(students, students + 4) / m);
}