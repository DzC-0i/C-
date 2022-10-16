#include <iostream>
//从A-->C的过程
using namespace std;

void hannuota(int n, char a, char b, char c);
int main() {
    int n;
    cin >> n;
    hannuota(n, 'A', 'B', 'C');
    return 0;
}
void hannuota(int n, char a, char b, char c) {
    if (n == 1)
        cout << a << "-->" << c << endl;
    else {
        hannuota(n - 1, a, c, b);
        cout << a << "-->" << c << endl;
        hannuota(n - 1, b, a, c);
    }
}
