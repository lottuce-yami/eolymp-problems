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

    cout << *min_element(nums, nums + n) + *max_element(nums, nums + n);
}