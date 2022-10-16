#include <stdio.h>

double price(double x);
/*为了鼓励销售员积极售卖商品，某公司提出按以下比例拿提成：
如果一年内销售总额小于5000元，按1%进行提成；
如果一年内销售总额大于等于5000元但小于10000元，按5%进行提成；
如果一年内销售总额大于等于10000元，按10%进行提成；
公司分上半年下半年进行结算，请你实现一个函数，可统计某个人在一年的累积提成。
注意：主函数中按上半年和下半年销售量分别输入。

其中 x 表示销售额。函数返回累计提成。
*/

int main()
{
    double buy, total;
    scanf("%lf", &buy); //输入上半年销售量
    total = price(buy); //计算总提成
    printf("sum_s=%.2f\n", total);
    scanf("%lf", &buy); //输入下半年销售量
    total = price(buy); //计算总提成
    printf("sum_s=%.2f\n", total);
    return 0;
}
double price(double x) {
    double a;
    static double b = 0;    //定义静态局部变量，使次结束时不被释放
    b = b + x;
    if (b < 5000)
        a = b * 0.01;
    else if (b >= 5000 && b < 10000)
        a = b * 0.05;
    else
        a = b * 0.10;
    return a;
}
