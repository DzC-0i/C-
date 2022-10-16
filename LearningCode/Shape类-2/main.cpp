#include <iostream>
#include<iomanip>
using namespace std;

class Shape
{
public:
    double getPerimeter(double a, double c, double k, double r) {
        if (a != 0)
            return 4 * a;
        else if (c != 0)
            return 2 * (c + k);
        else if (r != 0)
            return 3.14159 * 2 * r;
    }
    double getArea(double a, double c, double k, double r) {
        if (a != 0)
            return a * a;
        else if (c != 0)
            return c * k;
        else if (r != 0)
            return 3.14159 * r * r;
    }
};
class Square: public Shape
{
private:
    double a;
public:
    Square() {}
    Square(double b): a(b) {}
    void show() {
        cout << fixed << setprecision(2) << getPerimeter(a, 0, 0, 0) << " " << fixed << setprecision(2) << getArea(a, 0, 0, 0) << endl;
    }
};
class Rectangle: public Shape
{
private:
    double c;
    double k;
public:
    Rectangle() {}
    Rectangle(double c_, double k_): c(c_), k(k_) {}
    void show() {
        cout << fixed << setprecision(2) << getPerimeter(0, c, k, 0) << " " << fixed << setprecision(2) << getArea(0, c, k, 0) << endl;
    }
};
class Circle: public Shape
{
private:
    double r;
public:
    Circle() {}
    Circle(double r_): r(r_) {}
    void show() {
        cout << fixed << setprecision(2) << getPerimeter(0, 0, 0, r) << " " << fixed << setprecision(2) << getArea(0, 0, 0, r) << endl;
    }
};

int main()
{
    double a, c, k, r;
    cin >> a >> c >> k >> r;
    Square ss(a);
    Rectangle rr(c, k);
    Circle cc(r);
    ss.show();
    rr.show();
    cc.show();
    return 0;
}
