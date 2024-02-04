#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int x, sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int &min = *min_element(arr, arr + n);
    int &max = *max_element(arr, arr + n);

    for (int i = 0; i < n; i++) {
        if (arr[i] != min && arr[i] != max) sum += arr[i];
    }

    cout << sum;
}