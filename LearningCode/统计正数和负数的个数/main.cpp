#include <iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
//输入若干个（1个以上）整数，以0结束，统计读入的正数以及负数的数量，并计算输入的数值的总和及平均值（不对0计数）。
int main()
{
    int n,i,cnt1=0,cnt2=0,sum=0;
    double avg=0;
    while(scanf("%d",&n)&&n){
    		if(n>0)
	    		cnt1++;
	    	else if(n<0)
	    		cnt2++;
	    	sum+=n;	
	}
	avg=1.0*sum/(cnt1+cnt2);
	cout<<cnt1<<endl<<cnt2<<endl<<sum<<endl<<fixed<<setprecision(2)<<avg<<endl;
    return 0;
}
