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
            cout << setw(4) << a[i][j];   //setw(4)  ռ��4��,Ĭ���Ҷ���         setw(4)<<setfill(��@��)<<a[i][j]  ռ��4�У�����ǰ���á�@��ȫ��
        cout << endl;                     //setw(4)<<setiosflags��ios::left��<<setfill(��@��)<<a[i][j]   �����
    }
    return 0;
}
