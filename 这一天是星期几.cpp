#include<stdio.h>
int main()
{
	int t,m,n=0,a,b,c,s=0,i,j,sum=0;
	scanf("%d-%d-%d",&a,&b,&c);
	for(i=1;i<b;i++)
	  {
	   	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) s=31;
	    if(i==4||i==6||i==9||i==11) s=30;
	   	if(i==2)
	    {
	    	if(a%4==0) s=29;
	    	else s=28;
	   	}
	    n=s+n;
	  }
		m=n+c;
	for(j=1900;j<a;j++)
	{
		if(j%4==0)
		{
			if(j%100==0)
			{
				if(j%400==0) t=366;
				else t=365;
			}
			else t=366;
		}
		else if(j%4!=0) t=365;
		sum+=t;
	}
	sum=sum+m;
	if(sum%7==1) printf("Monday");
	else if(sum%7==2) printf("Tuesday");
	else if(sum%7==3) printf("Wednesday");
	else if(sum%7==4) printf("Thursday"); 
	else if(sum%7==5) printf("Friday");
	else if(sum%7==6) printf("Saturday");
	else if(sum%7==0) printf("Sunday");
	return 0;
}







	
