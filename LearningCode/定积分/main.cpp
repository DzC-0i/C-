#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/**
 * 某一天，游游学姐觉得自己很无聊决定找一件有趣的事做，突然他在桌上看到一本微积分书，
 * 所以他想找花花做他出的微积分题，但是他知道自己出的不能太难，不然自己可能都算不出来。于是他想了个办法，
 * 给出定积分的上限和下限，并且告知在定积分中x的最高次是n次，接着给出a0，a1,a2,a3,a4...an的值。例如给出n为2时 ，
 * 定积分的主体就是 a0x^2+a1x+a2。
 * @测试数据有T组（T<=500）,首行数字代表测试数据的组数，
 * 随后T组数据，每组数据第一行输入 l,r ,n。
 * l表示积分的下限，r表示积分的上限，n代表x的最高次的次数。（-10<=l,r,n<=10）
 */
int main() {
	int x, i, l, r, n, j, t;
	cin >> x;
	for (i = 0; i < x; i++) {
		double res = 0.0;
		cin >> l >> r >> n;
		for (j = 0; j < n + 1; j++) {
			cin >> t;
			res = res + 1.0 / (n - j + 1) * t * (pow(r, n - j + 1) - pow(l, n - j + 1)) ;
		}
		cout << fixed << setprecision(2) << res << endl;
	}
	return 0;
}
