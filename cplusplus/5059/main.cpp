#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums, nums + n);
    cout << nums[0] << ' ';

    for (int i = 1; i < n; ++i)
    {
        if (nums[i] != nums[0]) {
            cout << nums[i];
            break;
        }
    }
}