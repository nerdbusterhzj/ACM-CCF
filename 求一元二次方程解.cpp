#include<stdio.h>
#include<math.h>

void calulaterealroot(double a,double b,double c);
int main()
{   double a,b,c;
	printf("������a:");
	scanf("%lf",&a);
	printf("������b:");
	scanf("%lf",&b);
	printf("������c:");
	scanf("%lf",&c);
	calulaterealroot(a,b,c);
	getchar();
	return 0;
}
void  calulaterealroot(double a,double b,double c)
{
	double delta,x1,x2;
	delta=b*b-4*a*c;
	if(delta<0)
	{
	 printf("��ʵ����.\n");
	}
	else
	{
		if(delta=0)
		{
			x1=-b/(2*a);
			x2=-b/(2*a);
			printf("x1=%lf,x2=%lf.\n",x1,x2);
		}
		else
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("x1=%lf,x2=%lf.\n",x1,x2);
		}
		
	}
getchar();
}
