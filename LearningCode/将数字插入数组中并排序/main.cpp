#include <iostream>
#include <algorithm>
using namespace std;
//����һ�����źã���С���󣩵�n��Ԫ�ص��������飬����һ��������Ҫ�󰴴�С����Ĺ��ɽ�������������Ӧλ���С�
//�ڵ�һ���������ݵ�����n��n<=10��������������n�����ݣ�ÿ����е�һ��Ϊ���ݸ���(m)��m�����ݣ�Ȼ���ǲ�������ݡ�
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
