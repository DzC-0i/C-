#include <iostream>
using namespace std;

void DotB(int a) {
	if (a / 2)
		DotB(a / 2);
	cout << a % 2;
}

int main() {
	int a;
	cin >> a;
	DotB(a);
	return 0;
}