#include<iostream>
#include <cmath>
using namespace std;
/*�ж�һ�����Ƿ�Ϊ�Գ��Ҳ�������λ����������Ҫ���ж϶Գƺ��ж�������дһ��������
���������ж��飬�����ļ�β��ÿ���������һ��������n��0 < n < 2^32����*/
int sushu(unsigned int n);
int duichen(unsigned int n);
int main()
{
    unsigned int n;   //int ��� -2^31~2^31-1    ��  unsigned int �� 0 ~ 2^32 ���÷���Ҫ��    ����long long ��ȫд long long int��
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
