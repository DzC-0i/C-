#include<iostream>

using namespace std;

bool ispream(int n);
int weishu(int n);
bool duibi(int n, int m);
int main() {
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
