#include<iostream>
#include <cmath>
using namespace std;
/*判断一个数是否为对称且不大于五位数的素数。要求判断对称和判断素数各写一个函数。
测试数据有多组，处理到文件尾。每组测试输入一个正整数n（0 < n < 2^32）。*/
int sushu(unsigned int n);
int duichen(unsigned int n);
int main()
{
    unsigned int n;   //int 最多 -2^31~2^31-1    而  unsigned int 是 0 ~ 2^32 正好符合要求    或者long long （全写 long long int）
    while(cin>>n){
       if(n<100000 && sushu(n) && duichen(n))
           cout<<"Yes"<<endl;
       else
           cout<<"No"<<endl;
    }
	return 0;
}
int sushu(unsigned int n)
{
	int flg=1,i;
	if(n==1)
		flg=0;
    for(i=2;i<=sqrt(n);i+=2){
        if(n%i == 0){
        	flg=0;
        	break;
		}
    }
    return flg;
}
int duichen(unsigned int n)
{
	unsigned int temp = n,m=0;
	while (temp){
		m = m*10+temp%10;
		temp/=10;
	}
return (m == n);
}
