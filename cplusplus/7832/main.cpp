#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << count(nums, nums + n, *max_element(nums, nums + n));
}