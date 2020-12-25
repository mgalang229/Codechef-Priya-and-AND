#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int cnt=0;
	//find pairs of value where 'i' is less than 'j'
	//and the bitwise 'AND' of 'a[i]' and 'a[j]' is equals to 'a[i]'
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			if(i<j&&(a[j]&a[i])==a[i])
				cnt++;
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
