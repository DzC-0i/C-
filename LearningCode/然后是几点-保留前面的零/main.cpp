#include<iostream>
#include <iomanip>
using namespace std;
/*输入在一行中给出 2 个整数，分别是四位数字表示的起始时间、以及流逝的分钟数，
其间以空格分隔。注意：在起始时间中，当小时为个位数时，没有前导的零，即 5 点 30 分表示为 530；
0 点 30 分表示为 030。流逝的分钟数可能超过 60，也可能是负数。*/
int main()
{
	int n,p,h,m;
	cin>>n>>p;
	if(p>=0){
		m=n%100+p%60;
		h=n/100+p/60;        //用于规定该数值的宽度
		cout<<(m>=60?h+1:h)<<setw(2)<<setfill('0')<<(m>=60?m%60:m)<<endl;
	}                               //在宽度不够时用‘0’填充
	else{
		p=-p;
		m=n%100-p%60;
		h=n/100-p/60;
		cout<<(m<0?h-1:h)<<setw(2)<<setfill('0')<<(m<0?60+m:m)<<endl;
	}
	system("pause");
	return 0;
}
