#include<iostream>
using namespace std;

template <typename T1>
T1 Add(T1 a, T1 b) {
	return a + b;
}
template <typename T2>
T2 jian(T2 a, T2 b) {
	return a - b;
}
template <typename T3>
T3 cheng(T3 a, T3 b) {
	return a * b;
}
template <typename T4>
T4 chu(T4 a, T4 b) {
	return a / b;
}
template <typename T5>
T5 Max(T5 a, T5 b) {//max不能用小写，与库函数相同
	return a > b ? a : b;
}
template <typename T6>
T6 Min(T6 a, T6 b) {//min不能用小写，与库函数相同
	return a < b ? a : b;
}


int main() {
	int x, y;
	double a, b;
	cin >> x >> y;
	cin >> a >> b;
	cout << Max(x, y) << " " << Min(x, y) << " " << Add(x, y) << " " << jian(x, y) << " " << cheng(x, y) << " " << chu(x, y) << endl;
	cout << Max(a, b) << " " << Min(a, b) << " " << Add(a, b) << " " << jian(a, b) << " " << cheng(a, b) << " " << chu(a, b) << endl;
	return 0;
}
