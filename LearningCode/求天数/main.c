#include<stdio.h>
//实现一个函数，可计算输入的日期是这年中的第几天。
//输入样例 2020/2/5 中间以‘/‘隔开
int sumday(int year, int month, int day);

int main()
{
    int year, month, day, days;
    scanf("%d/%d/%d", &year, &month, &day);
    days = sumday(year, month, day);
    printf("%d", days);
    return 0;
}
int sumday(int year, int month, int day) {
    int number = 0;
    switch (month)
    {
    case 1 :
        number = 0;
        break;
    case 2 :
        number = 31;
        break;
    case 3 :
        number = 59;
        break;
    case 4 :
        number = 90;
        break;
    case 5 :
        number = 120;
        break;
    case 6 :
        number = 151;
        break;
    case 7 :
        number = 181;
        break;
    case 8 :
        number = 212;
        break;
    case 9 :
        number = 243;
        break;
    case 10:
        number = 273;
        break;
    case 11:
        number = 304;
        break;
    case 12:
        number = 334;
        break;
    }
    number = number + day;
    if ((month > 2 && year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        number = number + 1;
    return number;
}
