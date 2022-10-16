#include <iostream>
#include<cstring>
#define max 100
using namespace std;

class mystring
{
public:
	char *buf;
public:
	mystring() {
		buf = new char[max];
		cout << "construct 0" << endl;
	}
	mystring(char *ch) {
		buf = new char[max];
		strcpy(buf, ch);
		cout << "construct 1" << endl;
	}
	void operator=(mystring& s) {
		strcpy(buf, "c++");
		strcat(buf, s.buf);
	}
	friend ostream& operator << (ostream &out, mystring &r);
	~mystring() {
		delete buf;
		cout << "destruct" << endl;
	}
};
ostream& operator << (ostream &out, mystring &s) {
	out << s.buf;
	return out;
}
int main()
{
	char *ch;
	ch = new char[max];
	cin >> ch;
	mystring str1(ch);
	cout << str1 << endl;
	mystring str2;
	str2 = str1;
	cout << str2 << endl;
	return 0;
}
