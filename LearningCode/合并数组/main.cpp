#include <iostream>

using namespace std;
//已知两个升序数组，将它们合并成一个升序数组并输出。例如：数组array1={3,6,13,35,54}，数组array2={14,19,26,32}， 合并为新的数组array={3,6,13,14,19,26,32,35,54}。
//输入两行升序整数，当每行输入0时，表示输入结束。每行整数的个数1<=N<=10。
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
