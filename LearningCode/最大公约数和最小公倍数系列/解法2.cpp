#include <iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);
int main() {
	int n, m, t1, t2;
	while (cin >> n) {
		cin >> t1;
		t2 = t1;
		n--;
		while (n--) {
			cin >> m;
			t1 = gcd(t1, m);
			t2 = lcm(t2, m);
		}
		cout << t1 << " " << t2 << endl;
	}
	return 0;
}

int gcd(int a, int b) {
	return b > 0 ? gcd(b, a % b) : a;   //return a % b ? gcd(b, a % b) : b;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}