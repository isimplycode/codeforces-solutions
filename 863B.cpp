#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	vector<int> v;
	for (int i=0;i<a*2;++i) {
		int b;
		cin >> b;
		v.push_back(b);
	}
	sort(begin(v),end(v));
	int minins=INT_MAX;
	for (int i=0;i<a*2;++i) {
		for (int j=i+1;j<a*2;++j) {
			vector<int> p;
			for (int k=0;k<a*2;k++) {
				if (k!=i&&k!=j) {
					p.push_back(v[k]);
				}
			}
			int ins=0;
			for (int k=0;k<a*2-2;k+=2) {
				ins+=p[k+1]-p[k];
			}
			minins=min(minins,ins);
		}
	}
	cout << minins;
}
