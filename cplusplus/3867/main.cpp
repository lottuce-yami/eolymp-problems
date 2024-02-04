#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int tasks[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> tasks[i];
    }

    cout << *min_element(tasks, tasks + 3);
}