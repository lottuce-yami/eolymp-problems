#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] != *max_element(nums, nums + n)) sum += nums[i];
    }

    cout << sum;
}