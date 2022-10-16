#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    map<char, int>p;
    p['('] = p[')'] = 2;
    p['*'] = p['/'] = 1;
    cin >> a;
    stack<char>s;
    int flag = 0;
    for (int i = 0; i < a.size(); i++) {
        if ((i < 1 || a[i - 1] == '(') && (a[i] == '+' || a[i] == '-') || (a[i] == '.') || (a[i] >= '0' && a[i] <= '9')) {
            if (flag)
                cout << " ";
            flag = 1;
            if (a[i] != '+')cout << a[i];
            while (a[i + 1] == '.' || a[i + 1] >= '0' && a[i + 1] <= '9') {
                i++;
                cout << a[i];
            }
        }
        else {
            if (a[i] == ')') {
                while (s.size() && s.top() != '(') {
                    cout << " " << s.top();
                    s.pop();
                }
                s.pop();
            }
            else if (s.size() == 0 || p[a[i]] > p[s.top()]) {
                s.push(a[i]);
            }
            else {
                while (s.size() && s.top() != '(') {
                    cout << " " << s.top();
                    s.pop();
                }
                s.push(a[i]);
            }
        }
    }
    while (s.size()) {
        cout << " " << s.top();
        s.pop();
    }
    return 0;
}