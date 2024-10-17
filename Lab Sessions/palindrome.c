#include <stdio.h>
#include <string.h>

int main ()
{

char str1[20], str2[20];
printf("Enter a string : ");
scanf("%[^\n]s",str1);
printf("\nThe entered string is : ");
puts(str1);

for(int i=0; i<strlen(str1);i++)
{
 str2[i]=str1[strlen(str1)-i-1];
}

if(strcmp(str1,str2)==0)
printf("\nEntered string is palindrome.\n");
else
printf("\nEntered string isn't palindrome.\n");

return 0;

}

