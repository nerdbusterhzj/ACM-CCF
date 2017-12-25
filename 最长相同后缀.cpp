#include<stdio.h>
#include<string.h>
int compareSuffix(char a[], char b[])  
{  
    int len_a, len_b;  
    len_a = strlen(a);  
    len_b = strlen(b);     
    int backwards = 0;  
    int pa, pb;  
    for (pa = len_a-1, pb = len_b-1; (pa >= 0)&&(pb >= 0); --pa, --pb)  
    {  
        if(a[pa] == b[pb])  
        {  
            ++backwards;  
        }  
        else break;  
    }  
    return backwards;  
}  
int main()
{
	int n;
	char a[100],b[100];
	scanf("%d",&n);
	scanf("%s",&a);
	scanf("%s",&b);
	int backwards = 0;  
    int minBackwards = 300;         
    backwards = compareSuffix(a,b);              
    if (backwards <= minBackwards)  
    minBackwards = backwards;  
    if(backwards==0) printf("null");
    if(minBackwards)  
    {  
        for (int i = strlen(a)-minBackwards; i < strlen(a); ++i)  
        {  
            printf("%c", a[i]);  
        }  
    }         
    return 0;           	
 } 
