#include <iostream>

using namespace std;

int main() {
	char str[100], ch;
	int n;
	cin >> n;
	getchar();                 //至关重要的一点，这个用来清空缓存区的一个回车键或者一个空格键
	while (n--) {
		for (int i = 0; i < 100; i++) {
			ch = getchar();
			str[i] = ch;
			if (ch == '\n')
				break;
		}
		for (int j = 0; j < 100; j++) {
			if (str[j] == ' ' || str[j] == '\n') {
				int k = j - 1;
				while (k >= 0 && str[k] != ' ') {
					cout << str[k];
					k--;
				}
				cout << " ";
				if (str[j] == '\n')
					break;
			}
		}
	}
	return 0;
}