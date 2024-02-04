#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    vector<int> nums;

    if (n == 0 || n == 28) cout << 0;

    for (int i = 100; i <= n * 100 && i < 1000; i++)
    {
        if ((i / 100) + (i / 10 % 10) + (i % 10) == n) {
            nums.push_back(i);
            k++;
        } 
    }

    if (k > 0) cout << k << endl;

    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << endl;
    }
}