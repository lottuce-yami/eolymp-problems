#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] > nums[i - 1 ] && nums[i] > nums[i + 1]) k++;
    }

    cout << k;
}