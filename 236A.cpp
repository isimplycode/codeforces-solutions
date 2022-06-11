#include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_set<char> set;
	string a;
	cin >> a;
	for (auto& i : a) {
		set.insert(i);
	}
	if (set.size()%2) {
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}
}
