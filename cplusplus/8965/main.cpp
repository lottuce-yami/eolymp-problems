#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, min;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    min = *min_element(nums, nums + n);
    min /= 2;

    for (int i = 0; i < n; i++)
    {
        nums[i] -= min;
        cout << nums[i] << ' ';
    }
}