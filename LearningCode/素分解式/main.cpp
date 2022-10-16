#include <iostream>

using namespace std;
/**
 * 编写函数，输出一个正整数的素数分解式。主函数的功能为输入若干正整数（大于1），
 * 输出每一个数的素分解式。素数分解式是指将整数写成若干素数(从小到大)乘积的形式。
 * 例如：
    20=2*2*5
    36=2*2*3*3
    53=53
 * @return [description]
 */
bool isprime(int n);
int main() {
    int n, n2, i;
    while (cin >> n) {
        cout << n << "=";
        n2 = n;
        if (isprime(n)) {
            cout << n << endl;
        }
        else {
            for (i = 2; i * i <= n2; i++) {
                if (isprime(i)) {
                    if (n2 % i == 0) {
                        while (true) {
                            n2 = n2 / i;
                            cout << i;
                            if (n2 != 1)
                                cout << "*";
                            if (n2 % i != 0)
                                break;
                        }
                    }
                }
            }
            if (n2 != 1)
                cout << n2;
            cout << endl;
        }
    }
    return 0;
}

bool isprime(int n) {
    int i;
    if (n <= 1)
        return false;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
