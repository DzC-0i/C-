#include <iostream>
using namespace std;
/**
 * 设计一个名为Rectangle的矩形类，这个类包括：两个名为width和height的double数据域，
 * 它们分别表示矩形的宽和高。width和height的默认值都为1.该类包括矩形类的无参构造函数（默认构造函数）；
 * 一个width和height为指定值的矩形构造函数；一个名为getArea( )的函数返回矩形的面积；
 * 一个名为getPerimeter( )的函数返回矩形的周长。请实现这个类。编写一个测试程序，创建一个Rectangle对象，
 * 从键盘输入矩形的宽和高，然后输出矩形的面积和周长。
 */
class Rectangle
{
private:
    double width;
    double height;
public:
    void get(double width_ , double height_ );
    double getArea();
    double getPerimeter();
};

void Rectangle::get(double width_ = 1, double height_ = 1) {
    width = width_;
    height = height_;
}

double Rectangle::getArea() {
    return width * height;
}

double Rectangle::getPerimeter() {
    return 2 * (width + height);
}

int main() {
    double a, b;
    Rectangle r;
    cin >> a >> b;
    r.get(a, b);
    cout << r.getArea() << endl << r.getPerimeter() << endl;
    return 0;
}
