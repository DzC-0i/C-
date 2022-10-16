#include <iostream>
#include <cstdio>
//备注：在进入循环后直接输入回车也算一次循环
using namespace std;

int main() {
	char str[100];
	int n;
	cin >> n;
	getchar();        //至关重要的一点，这个用来清空缓存区的一个回车键或者一个空格键
	while (n--) {
		gets(str);
		for (int j = 0; j < 100; j++) {
			if (str[j] == ' ' || str[j] == '\0') {
				int k = j - 1;
				while (k >= 0 && str[k] != ' ') {
					cout << str[k];
					k--;
				}
				if (j != 0)
					cout << " ";
				if (str[j] == '\0')
					break;
			}
		}
	}
	return 0;
}