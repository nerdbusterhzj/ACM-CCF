#include<stdio.h>  
int main()  
{  
    int n,m,k,d1,d2;  
    scanf("%d%d%d",&n,&k,&m);   
    int i,a[105],out=0,num=0;                              
    for (i=1;i<=n;i++)                
    {  
        a[i]=i;   
    }  
    for (i=k;;i++)  
    {  
        if(i>n) i=i%n;    
        if(a[i]>0) num++;                     
        if(m==num&&out!=n-2)           
        {  
            num=0;   
            a[i]=0;  
            out++;  
        }  
        else if(m==num&&out==n-2)  
        {  
            d1=i;
            for (i=k;;i++)  
            {  
                if(i>n) i=i%n;    
                if(a[i]>0) num++;                        
                if(m==num&&out!=n)          
                {  
                  num=0;   
                  a[i]=0;  
                  out++;  
                }  
                else if(m==num&&out==n)    
                {   
                   d2=i;
                   break;
                }
			}
			break;
		}
    }  
    if(d1<d2) printf("%d %d",d1,d2);
    if(d2<d1) printf("%d %d",d2,d1);
    return 0;  
}  

