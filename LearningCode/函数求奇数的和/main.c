#include <stdio.h>
#define MAXN 10
/*����Ҫ��ʵ��һ������������N�����������������ĺͣ�ͬʱʵ��һ���ж���ż�Եĺ�����
���к���even�������û�����Ĳ���n����ż�Է�����Ӧֵ����nΪż��ʱ����1�����򷵻�0������OddSum������㲢���ش����N������List[]�����������ĺ͡�*/
int even( int n );
int OddSum( int List[], int N );

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}
int even( int n )
{
	int flg=0;
	if(n%2==0)
		flg=1;
	return flg;
} 
int OddSum( int List[], int N )
{
	int sum=0,i;
	for(i=0;i<N;i++){
		if(even(List[i]) == 0)
			sum+=List[i];
	}
	return sum; 
} 
 
