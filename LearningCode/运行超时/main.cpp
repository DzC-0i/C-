#include<iostream>
/*时限不能过于严格，即x≥3a1；
“标准程序”必须都能通过，即x≥ai+1,(2≤i≤n)；
x须为满足上述条件的最小偶数。*/
/*本题包含多组测试数据，第一行为一个整数T (1 ≤ T ≤ 10)，
表示测试数据组数。对于每组测试数据，第一行为一个整数n (2 ≤ n ≤ 10)，
表示程序数目，第二行为n个整数表示程序的运行时间 a1,a2,...,an (1≤ai ≤10)。*/
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
		if(temp%2！=0)
			temp+=1; 
		cout<<temp<<endl;
		
	}
	return 0;
} 
