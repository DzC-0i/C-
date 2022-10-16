#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int n, i, j, a[20][20];
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            a[i][j] = (i + 1) * 10 + j + 1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << setw(4) << a[i][j];   //setw(4)  占用4列,默认右对齐         setw(4)<<setfill(‘@’)<<a[i][j]  占用4列，不够前面用‘@补全’
        cout << endl;                     //setw(4)<<setiosflags（ios::left）<<setfill(‘@’)<<a[i][j]   左对齐
    }
    return 0;
}
