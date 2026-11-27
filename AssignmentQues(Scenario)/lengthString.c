#include <stdio.h>
int main()
{
char s[1000];
int len=0;
printf("Enter the string\n");
fgets(s,sizeof(s),stdin);
while(s[len]!='\0' && s[len] !='\n'){
    len++;
}
printf("%d",len);
return 0;
}