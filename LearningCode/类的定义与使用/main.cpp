#include <bits/stdc++.h>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    int in(int x_, int y_) {
        x = x_;
        y = y_;
    }
    void move(int a, int b) {
        cout << x + a << " " << y + b << endl;
    }
};
int main() {
    int a, b, c, d;
    Point p;
    cin >> a >> b;
    p.in(a, b);
    cin >> c >> d;
    p.move(c, d);
    return 0;
}
