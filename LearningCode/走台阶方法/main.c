#include <stdio.h>
/*����Ҫ��ʵ��һ���������ɼ������n��̨�׹��ж������߷���

̨�׵��߷�ֻ���Ը����������ַ�ʽ�ߣ�

��1��һ����1�ף�

��2��һ����2�ף�

��3��һ����3�ס�*/
int step(int n);

int main()
{
    int n, k;
    scanf("%d", &n);
    k = step(n);
    printf("%d", k);
    return 0;
}

int step(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    return step(n - 1) + step(n - 2) + step(n - 3);
}
