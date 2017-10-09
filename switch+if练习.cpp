#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入一个小于100的正整数a:");
	scanf("%d",&a);
	if(a>99)
	{
		printf("我日我叫你输小于100的数");
		getchar();
	}
	else
	{
		b=a%10;
	    switch(b)
	  {
		case 1: case 2: case 3: case 4: 
		printf("x");
		break;
		
		case 6: case 7: case 8: case 9:
		printf("y");
		break;
		
		default:
		printf("emmmm");
		break; 
	  }
	getchar();
	} 
	getchar();
	return 0;
 } 
