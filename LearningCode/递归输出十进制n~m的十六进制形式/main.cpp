#include <iostream>
/*案例拓展 编写函数输出一个十进制整数的十六进制形式 编写函数，函数的参数是整数N，
在函数中输出整数N的十六进制形式（递归方法实现）。主函数中输入整数a和b,输出从a到b的所有整数的十六进制形式。
具体输出格式参考样例
200 210
C8 C9 CA CB CC CD CE CF D0 D1 D2
*/
using namespace std;

void zhuan(int a);

int main()
{
    int n, m, i;
    cin >> n >> m;
    for (i = n; i <= m; i++) {
        zhuan(i);
        if (i != m)
            cout << " ";
    }
    return 0;
}
void zhuan(int a) {
    char p;
    if (a == 0)
        return ;
    zhuan (a / 16);
    if (a % 16 > 9)
        p = a % 16 - 10 + 'A';
    else
        p = a % 16 + '0';
    cout << p;
}
