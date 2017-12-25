#include<stdio.h>
typedef struct {
	int sum;
	int math;
	int ps;
	int en;
} ScoreType;
int main()
{
	int n,max;
	scanf("%d",&n);
	ScoreType a[10];
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i].math,&a[i].en,&a[i].ps);
		a[i].sum=a[i].math+a[i].en+a[i].ps;
	}
	max=a[0].sum;
	for(int i=1;i<n;i++)
	{
		if(max<a[i].sum) max=a[i].sum;
	}
	printf("%d",max);
	return 0;
}
