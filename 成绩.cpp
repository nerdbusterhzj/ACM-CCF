# include<stdio.h>
int judgegrade(int d);
int main()
{
	int c;
	printf("������һ�����֣�");
    scanf("%d",&c);
    judgegrade(c);
    printf("     �Գɼ����������뵽���񴦲�ѯ��ϸ���");
    getchar(); 
    return 0;
	
	
  }  
  int judgegrade(int d)
  {
  	switch(d)
  	{
  	    case 100:case 99 :case 98:case 97 :case 96 :case 95 :case 94 :case 93 :case 92 :case 91 :case 90 :
  		    printf("��ĳɼ��ȼ�ΪA����ϲ");
		    break;
		  
	    case 89 :case 88 :case 87 :case 86 :case 85 :case 84 :case 83 :case 82 :case 81 :case 80 :
		    printf("��ĳɼ��ȼ�ΪB����ϲ");
		    break;
		
		case 79 :case 78 :case 77 :case 76 :case 75 :case 74 :case 73 :case 72 :case 71:case 70 :
		    printf("��ĳɼ��ȼ�ΪC��������");
		    break;
			
		case 69 :case 68 :case 67:case 66:case 65 :case 64 :case 63 :case 62 :case 61 :case 60 :
		    printf("��ĳɼ��ȼ�ΪD��������Ŭ��");
		    break;
		
		default:
			printf("��ĳɼ��ȼ�ΪE��û���ˣ���ʺȥ��");
			break;

  		
	  }
	  getchar(); 
	  return d;
	  
	  
  }
  
