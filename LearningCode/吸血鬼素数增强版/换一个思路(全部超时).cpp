#include<iostream>

using namespace std;

bool ispream(int n);
int weishu(int n);

int main() {
	int t, n, m, wei, i, j, flg;
	cin >> t;
	while (t--) {
		cin >> n;
		if (ispream(n)) {
			int  max_wei = 1, min_wei = 1;
			wei = weishu(n);
			for (j = wei * 2; j > 0; j--)
				max_wei *= 10;
			for (j = wei * 2 - 1; j > 0; j--)
				min_wei *= 10;
			for (i = min_wei; i < max_wei; i ++) {
				if (i % n == 0) {
					m = i / n;
					if (weishu(m) == wei && ispream(m)) {
						int a[10] = {0};
						while (m > 0) {
							a[m % 10]++;
							m /= 10;
						}
						m = n;
						while (m > 0) {
							a[m % 10]++;
							m /= 10;
						}
						m = i;
						while (m > 0) {
							a[m % 10]--;
							m /= 10;
						}
						flg = 1;
						for (j = 0; j < 10; j++) {
							if (a[j] != 0) {
								flg = 0;
								break;
							}
						}
						if (flg == 1) {
							cout << "YES" << endl;
							break;
						}
					}
				}
			}
			if (flg == 0)
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
	return 0;
}

bool ispream(int n) {
	int i;
	if (n <= 1)
		return false;
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int weishu(int n) {
	int cnt = 0;
	while (n) {
		n /= 10;
		cnt++;
	}
	return cnt > 0 ? cnt : 1;
}
