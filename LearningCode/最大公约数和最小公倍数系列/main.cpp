#include <iostream>
/**
 * 有一系列正整数，求它们的最大公约数和最小公倍数，原始正整数和最终结果都在32位正整数范围内。
 * 数据有多组，每组数据占一行，第1个数代表本组数据正整数个数，正整数个数至少为1。
 * 针对每组输入数据，输出数据占一行，含最大公约数和最小公倍数，中间以一个空格分隔。
 */
using namespace std;

int gcd(int a, int b);   //辗转相除法-递归版  最大公约数
int lcm(int a, int b); //两数（n，m）乘积除以最大公约数=最小公倍数    本题为最大的两个数相乘
int main()
{
    int n, *a, i, yue , bei, tmp1, tmp2;
    while (cin >> n) {
        a = new int[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        if (i == 1)
            cout << a[0] << " " << a[0] << endl;
        else {
            tmp1 = tmp2 = a[0];
            for (i = 0; i < n - 1; i++) {
                yue = gcd(tmp1, a[i + 1]);
                bei = lcm(tmp2, a[i + 1]);
                tmp1 = yue;
                tmp2 = bei;
            }
            cout << yue << " " << bei << endl;
        }
        delete []a;
    }
    return 0;
}

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}