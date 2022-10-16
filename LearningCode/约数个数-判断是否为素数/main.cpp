#include <iostream>

using namespace std;
/**
 * 返回一个正整数的所有约数个数，主函数输入若干整数，依次输出其约数个数，
 * 一个输出占一行，如果是素数，再此行中再输出： Is Prime。
 * @param a [description]
 */
void youeshu(int a);
int main()
{
    int n;
    while (cin >> n)
        youeshu(n);
    return 0;
}
void youeshu(int a) {
    int i, cnt = 2;
    for (i = 2; i <= a / 2; i++) {
        if (a % i == 0)
            cnt++;
    }
    cout << cnt ;
    if (cnt == 2)
        cout << " Is Prime";
    cout << endl;
}
