#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x, k = 0, min;
    vector<int> nums, new_nums;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    min = *min_element(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) 
        if (nums[i] == min) k++;

    for (int i = 0; i < k; i++) 
        new_nums.push_back(min);
    
    for (int i = 0; i < n; i++) 
        if (nums[i] != min) new_nums.push_back(nums[i]);
    
    for (int i = 0; i < n; i++)
        cout << new_nums[i] << ' ';
}