#include <iostream>
using namespace std;
void swap(int *a,int *b);    //*1
void swap(int &a,int &b);    //*2
 
int main()
{
	int m=3,n=5;
	cout<<"ԭm��n��"<<m<<" "<<n<<endl;
	swap(&m,&n);   //*1
    cout<<"��һ�ν�����"<<m<<" "<<n<<endl;
    swap(m,n);     //*2
    cout<<"�ڶ��ν�����"<<m<<" "<<n<<endl;
    return 0;
}
//*1ָ�� 
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
//*2���� 
void swap(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;
}
