#include <iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
//�������ɸ���1�����ϣ���������0������ͳ�ƶ���������Լ��������������������������ֵ���ܺͼ�ƽ��ֵ������0��������
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
