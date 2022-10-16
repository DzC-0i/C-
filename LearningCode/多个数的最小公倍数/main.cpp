#include<iostream>
using namespace std;
//两个整数公有的倍数称为它们的公倍数，其中最小的一个正整数称为它们两个的最小公倍数。
//当然，n个数也可以有最小公倍数，例如：5，7，15的最小公倍数是105。 输入n个数，请计算它们的最小公倍数。
//首先输入一个正整数T，表示测试数据的组数，然后是T组测试数据。 每组测试先输入一个整数n（2≤n≤20），再输入n个正整数（属于[1，100000]范围内）。
//这里保证最终的结果在int型范围内。
int gcd(int a, int b)
{
	return b > 0 ? gcd(b, a % b) : a;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int k, cnt, a;
		a = cnt = 1;
		while (n--)
		{
			cin >> k;
			cnt = a / gcd(a, k) * k;
			a = cnt;
		}
		cout << cnt << endl;
	}
	return 0;
}
