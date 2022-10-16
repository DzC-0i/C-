#include <stdio.h>
/*本题要求实现一个函数，可计算对于n阶台阶共有多少种走法。

台阶的走法只可以根据下面三种方式走：

（1）一次走1阶；

（2）一次走2阶；

（3）一次走3阶。*/
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
