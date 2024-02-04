#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    printf("%.2f", *min_element(nums, nums + n) * 2);
}