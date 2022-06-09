#include <bits/stdc++.h>
using namespace std;

int main() {
	int a=0,d=0;
	int x;
	string w;
	cin >> x >> w;
	for (int i=0; i<x; i++) {
		if (w[i] == 'D') {
			d++;
		} else {
			a++;
		}
	}
	if (a > d) {
		cout << "Anton";
		} else if (d > a) {
			cout << "Danik";
		} else {
			cout << "Friendship";
		}
}
