#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a;
	while (a--) {
		cin >> c >> b;
		long long res=0;
		for (int i=1; i<=b; ++i) {
			res+=i;
		}
		int temp=b/1;
		for (int i=1; i<c; ++i) {
			b+=temp;
			res+=b;
		}
		cout << res << "\n";
	}
}
