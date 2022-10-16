#include <iostream>
using namespace std;
int fun(int n);
int addn(int n);
int gcd(int m,int n);
int mylen(char *s);

int main()
{
	cout<<fun(5)<<endl;
	cout<<addn(5)<<endl;
	cout<<gcd(25,75)<<endl;
	cout<<mylen("abcdefg")<<endl;
    return 0;
}
//阶乘
int fun(int n){
	if(n==0||n==1)
		return 1;
	return n*fun(n-1);
}
//累加
int addn(int n){
	if(n==0)
		return 0;
	return n+addn(n-1);
}
//最大公约数
int gcd(int m,int n){
	if(m%n==0)
		return n;
	return gcd(n,m%n);
}
//计算字符串长度
int mylen(char *s){
	if(*s=='\0')
		return 0;
	return 1+mylen(s+1);
}
