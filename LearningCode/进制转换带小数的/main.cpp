#include <iostream>
#include<algorithm>
//转换2~16进制 
using namespace std;

int main()
{
	double n;
    int k,x,i,p;
    cout<<"======================\n输入的10进制：" ;
    cin>>n;
    cout<<"要转换的进制：";
    cin>>k;
    cout<<"转换后保留几位小数：";
	cin>>x; 
    cout<<n<<"===>";
    if(n<0){
        n=-n;
        cout<<"-";
    }
    //计算整数部分 
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
    reverse(temp.begin(),temp.end());   //字符串反向排列
    cout<<temp<<".";
    //计算小数部分 
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
