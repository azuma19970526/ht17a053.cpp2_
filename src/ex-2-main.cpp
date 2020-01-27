// ex-2-main.cpp
#include <iostream>
#include <string>
using namespace std;

int toint(string s) {
	char c[4];
	int v[4];
	int sum = 0;
	int d = 1;
	for (int i = 0; i < s.size(); i++) {
		if ('0' <= s[i] && s[i] <= '9') {
			d = s[i] - '0';
		}
		else {
			for (int j = 0; j < 4; j++) {
				if (s[i] != c[j]) { continue; }
				sum += v[j] * d;
				d = 1;
				break;
			}
		}
	}
	return sum;
}
int main() {
	char c[4] = { 'm', 'c', 'x', 'i' };
	int v[4] = { 1000, 100, 10, 1 };
	int N;
	int s1, s2;
	cin >> N;
	while (N--) {
		cin >> s1 >> s2;
		int sum = int(s1) + int(s2);
		for (int i = 0; i < 4; i++) {
			int d = 0;
			while (sum >= v[i]) { sum -= v[i]; d++; }
			if (d > 1) { cout << d; }
			if (d > 0) { cout << c[i]; }
		}
		cout << "Œ‹‰Ê"<< s1+s2 << endl;
	}

	return 0;
}
