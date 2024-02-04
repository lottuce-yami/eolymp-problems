#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int nums[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> nums[i];
    }

    cout << *max_element(nums, nums + 4);
}