#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;

	    long long sum = 0;

	    vector<int> arr(n);
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }

	    for(int i = 1; i < n; i++){
	        sum += abs(arr[i] - arr[i-1])-1;
	    }

	    cout << sum << endl;
	}
}
  