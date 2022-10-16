#include<iostream>
/**
 * 吸血鬼素数是指这样的数：如果两个相同位数的素数，其乘积的组成数字正好与这两个素数的组成数字相同，
 * 那么这两个素数都被称为吸血鬼素数，例如，117067=167×701，前后都是由一个“0”，两个“1”，一个“6”，两个“7”组成，
 * 而167和701都是素数，那么167和701都是3位吸血鬼素数。 请判断给定的一组数，是否是吸血鬼素数。
 *
 * @有多组测试数据，第一行输入T（小于等于10000），为测试数据的组数，随后T行，每行一个正整数N（小于10000）。
 * @对每一组输入，如果是吸血鬼素数，在一行内输出“YES”，否则输出“NO”。
 */
/**
 * 解题思路：
 * 1.判断输入是否为素数
 * 2.对应位数的素数与原素数相乘
 * 判断数据是否符合
 *
 */
using namespace std;

bool ispream(int n);
int weishu(int n);
bool duibi(int n, int m);
int main() {
	ios::sync_with_stdio(false);   //让cin和cout变快的语句  但是还是不够快
	int t, n, wei, i;
	cin >> t;
	while (t--) {
		int flg = 0;
		cin >> n;
		if (ispream(n)) {
			wei = weishu(n);
			if (wei == 3) {
				for (i = 101; i < 1000; i += 2) {
					if (ispream(i) && duibi(n, i)) {
						flg = 1;
						break;
					}
				}
			}
			else if (wei == 4) {
				for (i = 1001; i < 10000; i += 2) {
					if (ispream(i) && duibi(n, i)) {
						flg = 1;
						break;
					}
				}
			}
			if (flg == 1)
				cout << "YES" << endl;
			else
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

bool duibi(int n, int m) {
	int a[10] = {0}, t = n * m, i, cnt;
	while (n != 0) {
		cnt = n % 10;
		a[cnt]++;
		n /= 10;
	}
	while (m != 0) {
		cnt = m % 10;
		a[cnt]++;
		m /= 10;
	}
	while (t != 0) {
		cnt = t % 10;
		a[cnt]--;
		t /= 10;
	}
	for (i = 0; i < 10; i++) {
		if (a[i] != 0)
			return false;
	}
	return true;
}
