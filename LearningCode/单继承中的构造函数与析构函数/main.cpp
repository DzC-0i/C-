#include <iostream>
#include<iomanip>
using namespace std;
const double PI = 3.14;

class Dot
{
private:
    float x;
    float y;
public:
    Dot(float a, float b): x(a), y(b) {
        cout << "Dot constructor called" << endl;
    }
    ~Dot() {
        cout << "Dot destructor called" << endl;
    }
};
class Cir: public Dot {
private:
    float r;
public:
    Cir(float a, float b, float c): Dot(a, b), r(c) {
        cout << "Cir constructor called" << endl;
    }
    double getArea() {
        return PI * r * r;
    }
    ~Cir() {
        cout << "Cir destructor called" << endl;
    }
};

int main() {
    float x, y, r;
    cin >> x >> y >> r;
    Cir c(x, y, r);
    cout << fixed << setprecision(2) << c.getArea() << endl;
    return 0;
}
