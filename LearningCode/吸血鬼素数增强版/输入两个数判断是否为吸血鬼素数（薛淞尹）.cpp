#include<bits/stdc++.h>
#define oo 0x3f3f3f3f
typedef long long ll;
typedef int64_t i64;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;
const ll mod = 1e9 + 7;
const ll maxn = 1e5;
int main() {
    ios::sync_with_stdio(false);
    //cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        int pan, pan1;
        pan = 1; pan1 = 1;
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                pan = 0;
            }
        }
        for (int i = 2; i < b; i++) {
            if (b % i == 0) {
                pan1 = 0;
            }
        }
        if (a == 2)pan = 1;
        if (b == 2)pan1 = 1;
        if (pan1 && pan) {
            ll sum;
            sum = a * b;
            int s[50], ss[50];
            for (int i = 0; i < 40; i++) {
                s[i] = ss[i] = 0;
            }
            while (a > 0) {
                s[a % 10]++;
                a /= 10;
            }
            while (b > 0) {
                s[b % 10]++;
                b /= 10;
            }

            while (sum > 0) {
                ss[sum % 10]++;
                sum /= 10;
            }
            int pp;
            pp = 1;
            for (int i = 0; i < 40; i++) {
                if (s[i] != ss[i]) {
                    pp = 0; break;
                }
            }
            if (pp) {
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
}
