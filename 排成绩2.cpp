#include<stdio.h>
int main()
{
 int n,m,i,j,i1,j1,i2,j2,i3,j3,s1=0,s2=0,avg3[100];
 double avg1,avg2,n1=0,n2=0;
 while(scanf("%d",&n)!=EOF)
 {
 scanf("%d",&m);
 int a[50][5];
 for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
 	{
	 scanf("%d",&a[i][j]);
	 }
  }	
  for(i1=0;i1<n;i1++)
  {
 	for(j1=0;j1<m;j1++)
 	{
 		n1+=a[i1][j1];
	 }
     avg1=n1/m;
     if(i1==n) printf("%.2lf",avg1);
     else printf("%.2lf ",avg1);
     n1=0;
  }
     printf("\n");
  for(j2=0;j2<m;j2++)
 {
	for(i2=0;i2<n;i2++)
	{
		n2+=a[i2][j2];
	}
	avg2=n2/n;
	if(j2==m) printf("%.2lf",avg2);
	else printf("%.2lf ",avg2);
	avg3[j2]=avg2;
	n2=0;
 }
    printf("\n");
  for(i3=0;i3<n;i3++)
     {
      for(j3=0;j3<m;j3++)
      {
   	   if(a[i3][j3]>=avg3[j3]) s1++;
   	  }	
    	if(s1==m) s2++;	
    	s1=0;
			
     }
        printf("%d",s2);
        s2=0;
        printf("\n\n")  ;
}
    return 0;
} 
 
 
