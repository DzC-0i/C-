#include<iostream>
using namespace std;
//��������������A��B��C����A^B mod C�Ľ��������mod��ʾ��������
long long emm(long long a,long long b,long long c);
int main(){
    int n,a,b,c,t;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<emm(a,b,c)<<endl;
    }
    return 0;
}
long long emm(long long a,long long b,long long c){
    long long ans=1;
    a=a%c;
    while(b>0){
        if(b%2==1)
            ans=(ans*a)%c;
        b >>= 1;
        a=(a*a)%c;
    }
    return ans;
}
