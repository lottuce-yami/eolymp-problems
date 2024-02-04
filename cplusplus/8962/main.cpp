#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] == *max_element(nums, nums + n)) {
            x = nums[i];
            nums[i] = nums[n - 1];
            nums[n - 1] = x;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << ' ';
    }
}