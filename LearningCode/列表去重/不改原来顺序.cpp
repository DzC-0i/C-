#include <iostream>
#include <vector>
#include<stack>
using namespace std;

int main() {
    char n;
    vector<int> a, b;
    stack<char>c;
    while (true) {
        cin >> n;
        int p;
        int k;
        k = 1;
        int sum;
        sum = 0;

        if (n == ',' || n == ']') {
            while (!c.empty() && c.top() != ',' && c.top() != '[') {
                p = c.top() - '0';
                c.pop();
                sum += p * k;
                k *= 10;
            }
            a.push_back(sum);
        }
        else
            c.push(n);
        if (n == ']')
            break;
    }
    vector<int>::iterator it1, it2;
    for (it1 = a.begin(); it1 != a.end(); it1++) {
        bool flg = true;
        for (it2 = b.begin(); it2 != b.end(); it2++) {
            if (*it1 == *it2) {
                flg = false;
                break;
            }
        }
        if (flg)
            b.push_back(*it1);
    }
    cout << b[0];
    for (it2 = b.begin() + 1; it2 != b.end(); it2++) {
        cout << " " << (*it2) ;
    }
    cout << endl;
    return 0;
}