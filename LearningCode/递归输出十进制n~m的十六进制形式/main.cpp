#include <iostream>
/*������չ ��д�������һ��ʮ����������ʮ��������ʽ ��д�����������Ĳ���������N��
�ں������������N��ʮ��������ʽ���ݹ鷽��ʵ�֣�������������������a��b,�����a��b������������ʮ��������ʽ��
���������ʽ�ο�����
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
