#include <iostream>
#include <algorithm>
using namespace std;
//已有一个已排好（从小到大）的n个元素的整型数组，输入一个整数，要求按从小到大的规律将它插入数组相应位置中。
//在第一行输入数据的组数n（n<=10），接下来输入n组数据，每组的中第一个为数据个数(m)及m个数据，然后是插入的数据。
int main()
{
    int n, m, i, j, *a;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        m = m + 1;
        a = new int [m];
        for (j = 0; j < m; j++) {
            cin >> a[j];
        }
        sort(a, a + m);
        for (j = 0; j < m ; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
        delete []a;
    }
    return 0;
}
