#include <stdio.h>
/*����Ҫ��ʵ��һ�����������n�п��ĵ����ֽ�������
����n���û�����Ĳ�����Ϊ[1, 9]����������Ҫ����������������ʾ�ĸ�ʽ��ӡ��n�п��ĵ����ֽ���������ע�⣬���һ�еĵ�һ������ǰû�пո�*/
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

