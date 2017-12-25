#include<stdio.h>
#include<string.h>
typedef struct {
	char name[10];
	int math;
	int en;
	int sum;
} StudentType;
int main()
{
	int n,temp;
	char tempn[10];
	StudentType a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %d",&a[i].name,&a[i].math,&a[i].en);
		a[i].sum=a[i].math+a[i].en;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].sum>a[j].sum)	
			{
				temp=a[i].sum;
				strcpy(tempn,a[i].name);
				a[i].sum=a[j].sum;
				strcpy(a[i].name,a[j].name);
				a[j].sum=temp;
				strcpy(a[j].name,tempn);
			}
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%s %d\n",a[i].name,a[i].sum);
	}
	return 0;
}
