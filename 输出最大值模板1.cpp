#include<stdio.h>
int main()
{
	int a[10];
	int i,max;
	printf("输入10个数");
	for(i=0;i<10;i++)
	   scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>max) max=a[i];
	 } 
	 printf("最大值为%d",max);
}
