#include<iostream>
/*ʱ�޲��ܹ����ϸ񣬼�x��3a1��
����׼���򡱱��붼��ͨ������x��ai+1,(2��i��n)��
x��Ϊ����������������Сż����*/
/*�����������������ݣ���һ��Ϊһ������T (1 �� T �� 10)��
��ʾ������������������ÿ��������ݣ���һ��Ϊһ������n (2 �� n �� 10)��
��ʾ������Ŀ���ڶ���Ϊn��������ʾ���������ʱ�� a1,a2,...,an (1��ai ��10)��*/
using namespace std;

int main()
{
	int t,i,j,n,x,temp,*a = new int[n];
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		for(j=0;j<n;j++){
			cin>>x;
			a[j]=x;
		}
		temp=3*a[0];
		for(j=1;j<n;j++){
			if(temp<=a[j]+1)
				temp=a[j]+1;
		}
		if(temp%2��=0)
			temp+=1; 
		cout<<temp<<endl;
		
	}
	return 0;
} 
