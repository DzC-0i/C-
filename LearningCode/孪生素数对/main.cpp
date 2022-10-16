#include <iostream>
//编程输入整数M(M<20000)和N(N<10)，输出大于M的前N个孪生素数对。孪生素数是指差为2的两个素数
using namespace std;
bool isprime(int n);
int main() {
    int m, n, i, cnt = 0;
    cin >> m >> n;
    for (i = m; cnt != n; i++) {
        if (isprime(i) && isprime(i + 2)) {
            cout << i << "," << i + 2 << endl;
            cnt++;
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