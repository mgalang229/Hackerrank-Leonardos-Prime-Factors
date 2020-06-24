#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
ll n, prod, cnt;

void decode() {
	cin >> n;
	prod = 1;
	cnt = 0;
	for(int i = 0; i < 15; ++i) {
		prod *= prime[i];
		if(prod <= n) {
			cnt++;
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
