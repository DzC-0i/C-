#include <iostream>

using namespace std;

int main() {
    int n, n2;
    while (cin >> n) {
        cout << n << "=";
        n2 = n;
        if (n < 2) {
            return 0;
        }
        for (int i = 2; i * i <= n2; i++) {
            while (n2 % i == 0) {
                n2 = n2 / i;
                cout << i;
                if (n2 != 1)
                    cout << "*";
            }
        }
        if (n2 != 1)
            cout << n2;
        cout << endl;
    }
    return 0;
}
