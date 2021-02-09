#include<stdio.h>
int main()
{
	char ch;
	printf("Input a character:");
	scanf("%c", &ch);
	switch(tolower(ch))
	{
		case 'a':
		case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	    	printf("%c is a vowel" ,ch);
	    	break;
	    	default:
	    	printf("%c is a consonant" ,ch);
	    		    	
	}
	return 0;
}
