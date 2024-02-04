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

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == *min_element(nums, nums + n)) {
            x = nums[i];
            nums[i] = nums[0];
            nums[0] = x;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << ' ';
    }
}