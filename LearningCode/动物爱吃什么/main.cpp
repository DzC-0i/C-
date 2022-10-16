#include<iostream>
#include<string>
using namespace std;

class animal
{
public:
    animal(int n, string na): num(n), name(na) {}
    int getnum() {
        return num;
    }
    string getname() {
        return name;
    }
    virtual void eat() = 0;
protected:
    int num;
    string name;
};
class Dog: public animal
{
public:
    Dog(int n, string na): animal(n, na) {}
    void eat() {
        cout << animal::getnum() << "ºÅ" << animal::getname() << "¿Ð¹ÇÍ·" << endl;
    }
};
class Cat: public animal
{
public:
    Cat(int n, string na): animal(n, na) {}
    void eat() {
        cout << animal::getnum() << "ºÅ" << animal::getname() << "³ÔÐ¡Óã" << endl;
    }
};

int main() {
    int n;
    string name;
    cin >> n >> name;
    Dog d(n, name);
    cin >> n >> name;
    Cat c(n, name);
    animal *p;
    p = &d;
    p->eat();
    p = &c;
    p->eat();
    return 0;
}
