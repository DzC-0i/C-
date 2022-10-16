#include <iostream>
#include <iomanip>
#define pi 3.14159265358979323846
using namespace std;

class Shape
{
public:
    virtual double Area()  = 0;
};
class Circle: public Shape
{
public:
    Circle(double r_ = 0): r(r_) {}
    double Area() {
        return pi * r * r;
    }
private:
    double r;
};
class Square: public Shape
{
public:
    Square(double a_ = 0): a(a_) {}
    double Area() {
        return a * a;
    }
private:
    double a;
};
class Rectangle: public Shape
{
public:
    Rectangle(double c_ = 0, double k_ = 0): c(c_), k(k_) {}
    double Area() {
        return c * k;
    }
private:
    double c;
    double k;
};
class Trapezoid: public Shape
{
public:
    Trapezoid(double a_ = 0, double b_ = 0, double h_ = 0): a(a_), b(b_), h(h_) {}
    double Area() {
        return 0.5 * (a + b) * h;
    }
private:
    double a;
    double b;
    double h;
};
class Triangle: public Shape
{
public:
    Triangle(double d_ = 0, double h_ = 0): d(d_), h(h_) {}
    double Area() {
        return 0.5 * d * h;
    }
private:
    double d;
    double h;
};
int main()
{
    double a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    Circle circle(a);
    Square square(b);
    Rectangle rectangle(c, d);
    Trapezoid trapezoid(e, f, g);
    Triangle triangle(h, i);
    Shape *pt[5] = {&circle, &square, &rectangle, &trapezoid, &triangle};
    double areas = 0.0;
    for (int j = 0; j < 5; j++) {
        areas += pt[j]->Area();
    }
    cout << fixed << setprecision(3) << areas << endl;
    return 0;
}
