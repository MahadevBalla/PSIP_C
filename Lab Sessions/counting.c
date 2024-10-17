#include<stdio.h>
#include<string.h>

int count(char x[]){
int v=0,c=0,sp=0,i;
for(i = 0 ; i<strlen(x) ; i++){
if(x[i] == ' '){
sp=sp+1;
}
else if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u'){
v=v+1;
}
else {
c=c+1;
}
}

printf("The number of vowels are %d\n " ,v);
printf("The number of consonants are %d\n ",c);
printf("The number of words are %d\n ",(sp+1));
printf("The number of characters are %ld\n " ,(strlen(x)-sp));
}

int main(){

char var1[60];
printf("Enter a string : ");
scanf("%[^\n]s",var1);
count(var1);
return 0;
}

