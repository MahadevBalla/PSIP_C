#include <stdio.h>
#include <string.h>
#include <Stdlib.h>

char*replace(const char* s, const char* old, const char* new)
{
	
	char* result;
	int i, cnt=0;
	int newlen = strlen(new);
	int oldlen = strlen(old);
	
	for(i=0; s[i]!='\0'; i++)
		if (strstr(&s[i], old) == &s[i])
		{ 
	    cnt++;
	    i += oldlen - 1;
		}

    result = (char*)malloc(i+cnt*(newlen-oldlen)+1);
    i=0;
	while(*s)
	{
		if(strstr(s,old) == s)
		{
			strcpy(&result[i],new);
			i+=newlen;
			s+=oldlen;
		}
		else
			result[i++]=*s++;
	}
	
	result[i]='\0';
	return result;

}
int main ()
{

char str[]="I LOVE CANADA BECAUSE CANADA IS A GREAT COUNTRY";
char x[]="CANADA";
char y[]="INDIA";
char* result = NULL;
printf("Original string is : %s\n",str);
result=replace(str,x,y);
printf("New string is : %s\n",result);
free(result);
return 0;

}

