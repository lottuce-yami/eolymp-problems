#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, min, max;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    min = *min_element(nums, nums + n);
    max = *max_element(nums, nums + n);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == min) nums[i] = max;
        else if (nums[i] == max) nums[i] = min;
        cout << nums[i] << ' ';
    }
}