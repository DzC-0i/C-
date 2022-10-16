#include<iostream>
int main()
{
    char ch,flg=1;
    ch=getchar();
    while(ch!=EOF){
        if(ch>='a' && ch<='z' && flg)
            ch=ch-32;
        if(ch==' ' || ch=='\n')
            flg=1;
        else
            flg=0;
        putchar(ch);
        ch=getchar();
    }
    return 0;
}
