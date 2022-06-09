#include <bits/stdc++.h>
using namespace std;

int main() {
	int cr = 1;
	int cc = 1;
	int a;
	for (int i=1; i<26; i++) {
		cin >> a;
		if (a == 1) {
			cout << abs(cr - 3) + abs(cc - 3);
		}
		if (i%5 == 0) {
			cr++;
			cc = 1;
		} else {
			cc ++;
			}
	}
}
