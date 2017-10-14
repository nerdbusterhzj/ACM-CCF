#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,y=0;//y为总张数，初始值定义为0 	
	int a,b,c,d,e,f,x;//定义100，50，10，5，2，1元 
	scanf("%d",&n);//输入老师人数 
	if(n==0) exit(0);
	else
	{
	for(m=1;m<=n;m++)
	 {
		int z;//输入这个人的工资 
		scanf("%d",&z);
		a=z/100;
		b=(z-a*100)/50;
		c=(z-a*100-b*50)/10;
		d=(z-a*100-b*50-c*10)/5;
		e=(z-a*100-b*50-c*10-d*5)/2;
		f=z-a*100-b*50-c*10-d*5-e*2;
		x=a+b+c+d+e+f;
		y=y+x;
	 }
	printf("%d",y);
    }
	return 0;
}

