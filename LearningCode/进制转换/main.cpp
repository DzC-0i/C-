#include <iostream>
#include<algorithm>        //反向排列（reverse函数）必要的头文件 

using namespace std;
/*将十进制整数n（?2 ≤n≤2 ?1）转换成k（2≤k≤16）进制数。注意，10~15分别用字母A、B、C、D、E、F表示。
首先输入一个正整数t，表示测试数据的组数，然后是T组测试数据。每组测试数据输入两个整数n和k。*/
int main()
{
    int t,n,k,i,p;//j         //t要输入几组数据    n输入的数   k转换的进制   i数据的大循环    j数组的下标、并且有作为输出循环使用    p临时存放n的数
    //char temp[100];
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        cout<<n<<" ";
        if(n<0){
            n=-n;
            cout<<"-";
        }
        //j=0;
        string temp="";
        do
        {
            p=n%k;
            n/=k;
            /*switch(p)
            {
            case 0:
                temp[j]="0";
                break;
            case 1:
                temp[j]="1";
                break;
            case 2:
                temp[j]="2";
                break;
            case 3:
                temp[j]="3";
                break;
            case 4:
                temp[j]="4";
                break;
            case 5:
                temp[j]="5";
                break;
            case 6:
                temp[j]="6";
                break;
            case 7:
                temp[j]="7";
                break;
            case 8:
                temp[j]="8";
                break;
            case 9:
                temp[j]="9";
                break;
            case 10:
                temp[j]="A";
                break;
            case 11:
                temp[j]="B";
                break;
            case 12:
                temp[j]="C";
                break;
            case 13:
                temp[j]="D";
                break;
            case 14:
                temp[j]="E";
                break;
            case 15:
                temp[j]="F";
                break;
            }*/
            /*switch或者可以改为，比switch短了好一大截 
			if(p>=0 && p<=9)
				temp[j]=p+'0';
			else
				temp[j]=p+'A';*/
			//j++; 
            if(p>=0 && p<=9)
                temp+=p+'0';
            else
                temp+=p-10+'A';
        }while(n!=0);
        /*for(j-=1;j>=0;j--){
            cout<<temp[j];
        }
        cout<<endl;*/
        reverse(temp.begin(),temp.end());   //字符串反向排列
        cout<<temp<<endl;
    }

    return 0;
}
