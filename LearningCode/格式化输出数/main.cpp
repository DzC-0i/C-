#include <iostream>
//ÿ�����10���������������м���1���ո���Ϊ�ָ����� ��ʾ�������޿ո�ÿ�е����һ������֮�󲻼ӿո�
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << i + 1;
        if ((i + 1) % 10 != 0 && i + 1 != n)
            cout << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    return 0;
}
