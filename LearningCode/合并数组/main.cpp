#include <iostream>

using namespace std;
//��֪�����������飬�����Ǻϲ���һ���������鲢��������磺����array1={3,6,13,35,54}������array2={14,19,26,32}�� �ϲ�Ϊ�µ�����array={3,6,13,14,19,26,32,35,54}��
//��������������������ÿ������0ʱ����ʾ���������ÿ�������ĸ���1<=N<=10��
int main()
{
    int a[11], b[11], c[20], i, j, k = 0;
    for (i = 0; i < 11; i++) {
        cin >> a[i];
        if (a[i] == 0)
            break;
    }
    for (j = 0; j < 11; j++) {
        cin >> b[j];
        if (b[j] == 0)
            break;
    }
    i = 0 ;
    j = 0 ;
    while (a[i] != 0 || b[j] != 0)
    {
        if (a[i] > b[j])
        {
            if (b[j] == 0)
                c[k++] = a[i++];
            else
                c[k++] = b[j++];
        }
        if (a[i] < b[j])
        {
            if (a[i] == 0)
                c[k++] = b[j++];
            else
                c[k++] = a[i++];
        }
    }
    for (k = 0; k < i + j; k++)
        cout << c[k] << " ";
    return 0;
}
