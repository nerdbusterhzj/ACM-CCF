# include<stdio.h>
int judgegrade(int d);
int main()
{
	int c;
	printf("请输入一个数字：");
    scanf("%d",&c);
    judgegrade(c);
    printf("     对成绩如有疑问请到教务处查询详细情况");
    getchar(); 
    return 0;
	
	
  }  
  int judgegrade(int d)
  {
  	switch(d)
  	{
  	    case 100:case 99 :case 98:case 97 :case 96 :case 95 :case 94 :case 93 :case 92 :case 91 :case 90 :
  		    printf("你的成绩等级为A，恭喜");
		    break;
		  
	    case 89 :case 88 :case 87 :case 86 :case 85 :case 84 :case 83 :case 82 :case 81 :case 80 :
		    printf("你的成绩等级为B，恭喜");
		    break;
		
		case 79 :case 78 :case 77 :case 76 :case 75 :case 74 :case 73 :case 72 :case 71:case 70 :
		    printf("你的成绩等级为C，还不错");
		    break;
			
		case 69 :case 68 :case 67:case 66:case 65 :case 64 :case 63 :case 62 :case 61 :case 60 :
		    printf("你的成绩等级为D，还需多多努力");
		    break;
		
		default:
			printf("你的成绩等级为E，没救了，吃屎去吧");
			break;

  		
	  }
	  getchar(); 
	  return d;
	  
	  
  }
  
