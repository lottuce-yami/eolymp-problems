#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    float x;
    cin >> n;
    float nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums[i] = abs(x);
    }

    printf("%.2f", *max_element(nums, nums + n));
}