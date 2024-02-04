#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums, nums + n);
    sum = nums[n - 1] + nums[n - 2];

    cout << sum;
}