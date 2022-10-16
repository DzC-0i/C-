// #include<iostream>
// #include<cmath>
// using namespace std;
// class Time
// {
//     int hh;
//     int mm;
//     int ss;
// public:
//     Time() {;}
//     void set(int h, int m, int s)
//     {
//         hh = h;
//         mm = m;
//         ss = s;
//     }
//     int operator-(const Time t)
//     {
//         long int s1 = hh * 3600 + mm * 60 + ss;
//         long int s2 = t.hh * 3600 + t.mm * 60 + t.ss;
//         if (s1 > s2)
//             return s1 - s2;
//         else
//             return s2 - s1;
//     }
// };
// class point
// {
//     int x;
//     int y;
// public:
//     point() {;}
//     void set(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     double operator -(point p)
//     {
//         return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
//     }
// };
// class Date {
// private:
//     int year, month, day;
// public:
//     Date() {;}
//     void set(int y, int m, int d)
//     {
//         year = y;
//         month = m;
//         day = d;
//     }
//     int operator -(Date sec)
//     {
//         int totalDay1 = year * 365 + month * 30 + day;
//         int totalDay2 = sec.year * 365 + sec.month * 30 + sec.day;
//         return totalDay1 - totalDay2;
//     }
// };
// template<class T>
// double dist(T a, T b)
// {
//     return fabs(a - b);
// }
// int main()
// {
//     int type;
//     cin >> type;
//     int a, b;
//     float f1, f2;
//     int x1, x2, y1, y2;
//     int yy1, yy2, mm1, mm2, dd1, dd2;
//     int h1, h2, m1, m2, s1, s2;
//     Date sample1, sample2;
//     point p1, p2;
//     Time t1, t2;
//     while (type != 0)
//     {
//         switch (type)
//         {
//         case 1:
//             cin >> a >> b;
//             cout << dist(a, b) << endl;
//             break;
//         case 2:
//             cin >> f1 >> f2;
//             cout << dist(f1, f2) << endl;
//             break;
//         case 3:
//             cin >> x1 >> y1 >> x2 >> y2;
//             p1.set(x1, y1);
//             p2.set(x2, y2);
//             cout << dist(p1, p2) << endl;
//             break;
//         case 4:
//             cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
//             t1.set(h1, m1, s1);
//             t2.set(h2, m2, s2);
//             cout << dist(t1, t2) << endl;
//             break;
//         case 5:
//             cin >> yy1 >> mm1 >> dd1 >> yy2 >> mm2 >> dd2;
//             sample1.set(yy1, mm1, dd1);
//             sample2.set(yy2, mm2, dd2);
//             cout << dist(sample1, sample2) << endl;
//             break;
//         }
//         cin >> type;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

class cTime {
private:
    int hh;
    int mm;
    int ss;
    int total;
public:
    cTime() {

    }
    cTime(int h, int m, int s): hh(h), mm(m), ss(s) {
        total = hh * 3600 + mm * 60 + ss;
    }

    int get_total()
    {
        return this->total;
    }

    int  operator-(cTime& out)
    {
        return this->total - out.get_total();
    }
};

class point {
private:
    double x;
    double y;
public:
    point() {

    }
    point(double ox, double oy): x(ox), y(oy) {

    }
    double operator-(point& out)
    {
        return sqrt((this->x - out.x) * (this->x - out.x) + (this->y - out.y) * (this->y - out.y));
    }
};
class date {
private:
    int year;
    int month;
    int day;
    int total;
public:
    date() {

    }
    date(int y, int m, int d): year(y), month(m), day(d)
    {
        total = year * 365 + month * 30 + day;
    }

    int get_total()
    {
        return this->total;
    }

    int operator-(date& out)
    {
        return this->total - out.total;
    }
};

template <class T>
double dist(T a, T b)
{
    return abs(a - b);
}

int main()
{
    int ops;
    while (1)
    {
        cin >> ops;
        if (ops == 0)
            break;
        switch (ops)
        {
        case 1:
        {
            int x, y;
            cin >> x >> y;
            cout << dist(x, y) << endl;
            break;
        }
        case 2:
        {
            double x, y;
            cin >> x >> y;
            cout << dist(x, y) << endl;
            break;
        }
        case 3:
        {
            point x, y;
            double ax, ay, bx, by;
            cin >> ax >> ay >> bx >> by;
            x = point(ax, ay); y = point(bx, by);
            cout << dist(x, y) << endl;
            break;
        }
        case 4:
        {
            cTime x, y;
            int hh1, mm1, ss1, hh2, mm2, ss2;
            cin >> hh1 >> mm1 >> ss1 >> hh2 >> mm2 >> ss2;
            x = cTime(hh1, mm1, ss1);
            y = cTime(hh2, mm2, ss2);
            cout << dist(x, y) << endl;
            break;
        }
        case 5:
        {
            date x, y;
            int hh1, mm1, ss1, hh2, mm2, ss2;
            cin >> hh1 >> mm1 >> ss1 >> hh2 >> mm2 >> ss2;
            x = date(hh1, mm1, ss1);
            y = date(hh2, mm2, ss2);
            cout << dist(x, y) << endl;
            break;
        }
        }
    }
    return 0;
}