#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x, k = 0, max;
    vector<int> nums, new_nums;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    max = *max_element(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) 
        if (nums[i] == max) k++;

    for (int i = 0; i < n; i++) 
        if (nums[i] != max) new_nums.push_back(nums[i]);

    for (int i = 0; i < k; i++) 
        new_nums.push_back(max);
    
    for (int i = 0; i < n; i++)
        cout << new_nums[i] << ' ';
}