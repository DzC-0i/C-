#include<iostream>
using namespace std;
//一个数组a中存有n（>0）个整数，将每个整数循环向右移m（≥0）个位置，即将a中的数据由（a0,a1,  … an−1）变换为（an−m … an−1 a0 a 1  … an−m−1）（最后m个数循环移至最前面的m个位置）。

int main() {
    int *a, n, m, i;
    cin >> n;
    a = new int [n]; //定义动态数组 *a
    cin >> m;
    if (m > n)
        m = m % n; //去除无效移动
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = n - m; i < n; i++)
        cout << a[i] << " ";
    for (i = 0; i < n - m; i++) {
        cout << a[i];
        if (i != n - m - 1)
            cout << " ";
    }
    cout << endl;
    delete []a;    //完成后释放数组
    return 0;
}
