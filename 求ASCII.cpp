# include<stdio.h>
int JudgeCharacterType(int ch);
int main()
{
	int c;
	printf("请输入一个字母：");
    c=getchar();
    JudgeCharacterType(c);
    printf("The ASCII of '%c' is %d.\n\n",c,c);
    return 0;
	
	
  }  
  int JudgeCharacterType(int ch)
  {
  	switch(ch)
  	{
  	    case'A':case'B':case'C':case'D':case'E':case'F':case'G':case'H':case'I':case'J':case'K':case'L':case'M':case'N':case'O':case'P':case'Q':case'R':case'S':case'T':case'U':case'V':case'W':case'X':case'Y':case'Z':
  		    printf("%c:Uppercase letters:",ch);
		    break;
		  
	    case'a':case'b':case'c':case'd':case'e':case'f':case'g':case'h':case'i':case'j':case'k':case'l':case'm':case'n':case'o':case'p':case'q':case'r':case's':case't':case'u':case'v':case'w':case'x':case'y':case'z':
		    printf("%c:Lowercase letters.",ch);
		    break;
		
		case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
		    printf("%c:阿拉伯数字.",ch);
		    break;
			
		case' ':case'\n':case'\t':case'\r':
		    printf("%c:空格字符.",ch);
		    break;
		
		default:
			printf("%c:其他字母.",ch);
			break;

  		
	  }
	  return ch;
	  
  }
  
