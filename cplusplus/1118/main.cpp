#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2) cout << "Ooops!";
    else {
        int nums[n];

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        cout << *min_element(nums, nums + n) << ' ' << *max_element(nums, nums + n);
    }
}