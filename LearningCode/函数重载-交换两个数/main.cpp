#include <iostream>
using namespace std;
void swap(int *a,int *b);    //*1
void swap(int &a,int &b);    //*2
 
int main()
{
	int m=3,n=5;
	cout<<"原m，n："<<m<<" "<<n<<endl;
	swap(&m,&n);   //*1
    cout<<"第一次交换："<<m<<" "<<n<<endl;
    swap(m,n);     //*2
    cout<<"第二次交换："<<m<<" "<<n<<endl;
    return 0;
}
//*1指针 
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
//*2引用 
void swap(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;
}
