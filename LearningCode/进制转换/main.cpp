#include <iostream>
#include<algorithm>        //�������У�reverse��������Ҫ��ͷ�ļ� 

using namespace std;
/*��ʮ��������n��?2 ��n��2 ?1��ת����k��2��k��16����������ע�⣬10~15�ֱ�����ĸA��B��C��D��E��F��ʾ��
��������һ��������t����ʾ�������ݵ�������Ȼ����T��������ݡ�ÿ���������������������n��k��*/
int main()
{
    int t,n,k,i,p;//j         //tҪ���뼸������    n�������   kת���Ľ���   i���ݵĴ�ѭ��    j������±ꡢ��������Ϊ���ѭ��ʹ��    p��ʱ���n����
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
            /*switch���߿��Ը�Ϊ����switch���˺�һ��� 
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
        reverse(temp.begin(),temp.end());   //�ַ�����������
        cout<<temp<<endl;
    }

    return 0;
}
