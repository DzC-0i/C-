#include <iostream>

using namespace std;
/**
 * 有两个整数a,b(2<=a<b)，输出整数区间[a，b]内的所有素数。
 * 现在已知有多组数据，请依次处理。 输入样例：100 110 输出样例：101,103,107,109
 * 有多组数据，每组2个整数a,b。
 */
void prime (int a, int b);
int isprime(int n);

int main()
{
    int n, m;
    while (cin >> n >> m) {
        prime(n, m);
    }
    return 0;
}
void prime (int a, int b) {
    int i, j = 0;
    for (i = a; i <= b; i++) {
        if (j == 0 && isprime(i)) {
            j++;
            cout << i;
        }
        else if (isprime(i))
            cout << "," << i;
    }
    cout << endl;
}
int isprime(int n)
{
    int i, s = 1;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            s = 0;
            break;
        }
    }
    return s;
}
