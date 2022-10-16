#include <stdio.h>
/*本题要求实现一个函数，输出n行空心的数字金字塔。
其中n是用户传入的参数，为[1, 9]的正整数。要求函数按照如样例所示的格式打印出n行空心的数字金字塔，请注意，最后一行的第一个数字前没有空格。*/
void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}
void hollowPyramid ( int n )
{
	int i,j,k;
	for(i=0;i<n;i++){
		k=n-i-1;
		for(j=0;j<2*i+1;j++){
			for(;k>0;k--)
				printf(" ");
			if(j==0 || j==2*i || i==n-1)
				printf("%d",i+1);
			else
				printf(" ");
		}
		printf("\n");
	} 
} 

