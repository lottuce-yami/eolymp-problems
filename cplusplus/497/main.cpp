#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--) {
    	int a, b, mxa=0, mib=40;

    	int n; 
    	cin >> n;
    	for (int i = 0; i < n; i++) {
    		cin >> a >> b;
    		mxa = max(a, mxa);
    		mib = min(b, mib);
    	}

    	if(mib >= mxa) cout << "YES\n"; 
    	else cout << "NO\n";
    }
}