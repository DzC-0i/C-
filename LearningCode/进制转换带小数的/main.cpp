#include <iostream>
#include<algorithm>
//ת��2~16���� 
using namespace std;

int main()
{
	double n;
    int k,x,i,p;
    cout<<"======================\n�����10���ƣ�" ;
    cin>>n;
    cout<<"Ҫת���Ľ��ƣ�";
    cin>>k;
    cout<<"ת��������λС����";
	cin>>x; 
    cout<<n<<"===>";
    if(n<0){
        n=-n;
        cout<<"-";
    }
    //������������ 
    int t1=(int)n;
    string temp="";
    do
    {
        p=t1%k;
        t1/=k;
        if(p>=0 && p<=9)
            temp+=p+'0';
        else
            temp+=p-10+'A';
    }while(t1!=0);
    reverse(temp.begin(),temp.end());   //�ַ�����������
    cout<<temp<<".";
    //����С������ 
    double t2=n;
    char f;
    for(i=0;i<x;i++){
    	t2=(t2-(int)t2)*2;
    	p=(int)t2;
    	if(p>=0 && p<=9)
    		f=p+'0';	
        else
        	f=p-10+'A';
        cout<<f;
	} 
    cout<<"\n======================";
    return 0;
}
