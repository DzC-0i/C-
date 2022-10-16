#include <iostream>
using namespace std;
/*古希腊数学家毕达哥拉斯在自然数研究中发现，220的所有真约数（即不是自身的约数）之和为：1+2+4+5+10+11+20+22+44+55+110＝284。
而284的所有真约数为1、2、4、71、 142，加起来恰好为220。人们称这样的数对为亲和数。也就是说，
若两个数中任何一个数都是另一个数的真约数之和，则它们就是亲和数。请判断输入的两个整数是否是亲和数。*/
int zysh(int n);
int main()
{
    int a,b;
    while(cin>>a>>b){
        /*if(zysh(a) == zysh(b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;*/
        cout<<(zysh(a) == zysh(b)?"YES":"NO")<<endl;    //突然心血来潮想到了一个不错的尝试 （成功） 
    }
    return 0;
}
int zysh(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++){
        if(n%i==0)
            sum+=i;
    }
    return sum;
}
