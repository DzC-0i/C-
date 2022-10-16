#include <iostream>

using namespace std;
class Date
{
protected:
    int year;
    int month;
    int day;
public:
    Date() {}
    Date(int year_, int month_, int day_): year(year_), month(month_), day(day_) {}
};
class Time
{
protected:
    int hour;
    int minute;
    int second;
public:
    Time() {}
    Time(int hour_, int minute_, int second_): hour(hour_), minute(minute_), second(second_) {}
};
class Schedule: protected Date, protected Time {
private:
    int ID;
public:
    Schedule() {}
    Schedule(int ID_, int year_, int month_, int day_, int hour_, int minute_, int second_):
        Date(year_, month_, day_), Time(hour_, minute_, second_) , ID(ID_) {}
    void show() {
        cout << "The urgent schedule is No." << ID << ": " << year << "/" << month << "/"
             << day << " " << hour << ":" << minute << ":" << second << endl;
    }
    bool operator < (const Schedule & s2) {
        if (year < s2.year) {
            return true;
        } else if (year > s2.year) {
            return false;
        } else if (month < s2.month) {
            return true;
        } else if (month > s2.month) {
            return false;
        } else if (day < s2.day) {
            return true;
        } else if (day > s2.day) {
            return false;
        } else if (hour < s2.hour) {
            return true;
        } else if (hour > s2.hour) {
            return false;
        } else if (minute < s2.minute) {
            return true;
        } else if (minute > s2.minute) {
            return false;
        } else if (second < s2.second) {
            return true;
        } else if (second > s2.second) {
            return false;
        } else {
            return true;
        }
    }
};
int main()
{
    int i, y, mo, d, h, mi, s;
    Schedule ss1;
    cin >> i;
    scanf("%d/%d/%d %d:%d:%d", &y, &mo, &d, &h, &mi, &s);
    ss1 = Schedule(i, y, mo, d, h, mi, s);
    cin >> i;
    while (i) {
        scanf("%d/%d/%d %d:%d:%d", &y, &mo, &d, &h, &mi, &s);
        Schedule ss2(i, y, mo, d, h, mi, s);
        if (ss2.operator < (ss1))
            ss1 = ss2;
        cin >> i;
    }
    ss1.show();
    return 0;
}
