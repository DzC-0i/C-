#include<bits/stdc++.h>
#define oo 0x3f3f3f3f
typedef long long ll;
typedef int64_t i64;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;
const ll mod = 10000;
const ll maxn = 1e5;
int prime[maxn];
int vis[maxn];
int is_prime[500000];
void Prime(void) {
    memset(vis, 0, sizeof(vis));
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i <= maxn; i++) {
        if (!vis[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0] && i * prime[j] <= maxn; j++) {
            vis[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
}
ll ans(int a) {
    int aa = a;
    if (is_prime[a] == 0)return -1;
    for (int j = 1; j < prime[0]; j++) {
        a = aa;
        int b;
        b = prime[j];
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
            return b;
        }
        else continue;
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
//cin.tie(0); cout.tie(0);
    int t;
    Prime();
    memset(is_prime, 0, sizeof(0));
    for (int i = 1; i < prime[0]; i++) {
        is_prime[prime[i]] = 1;
    }
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a;
        ll sum;
        sum = ans(a);
        if (sum == -1) {
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}
