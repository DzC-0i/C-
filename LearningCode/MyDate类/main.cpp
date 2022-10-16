#include <bits/stdc++.h>
using namespace std;

class MyDate
{
public:
	MyDate() {}
	MyDate(int year_, int month_, int day_): year(year_), month(month_), day(day_) {}
	void print_();
	int get(int n);
	int compare(MyDate d);
private:
	int year;
	int month;
	int day;
};

void MyDate::print_() {
	cout << month << "/" << day << "/" << year;
}

int MyDate::get(int n) {
	if (n == 1)
		return this->year;
	else if (n == 2)
		return this->month;
	else if (n == 3)
		return this->day;
}

int MyDate::compare(MyDate d) {
	if (this->year > d.get(1))
		return 1;
	else if (this->year == d.get(1) && this->month > d.get(2) )
		return 1;
	else if (this->year == d.get(1) && this->month == d.get(2) && this->day > d.get(3))
		return 1;
	else if (this->year == d.get(1) && this->month == d.get(2) && this->day == d.get(3))
		return 0;
	return -1;
}

int main() {
	MyDate now, d;
	int y, m, da;
	cin >> y >> m >> da;
	now = MyDate(y, m, da);
	cin >> y >> m >> da;
	d = MyDate(y, m, da);
	now.print_();
	cout << " " << now.compare(d) << endl;
	return 0;
}
