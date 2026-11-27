#include <stdio.h>
int main()
{
    char s[101];
    int len=0;
    int hasLetter=0;
    scanf("%100s",s);
    for(int i=0;s[i]!='\0';i++){
        len++;
        if(((s[i]>='A' && s[i]<='Z') && (s[i])>'a' && s[i]<='z') ){
            hasLetter=1;
        }
    }
    if(len>=8&& hasLetter==1){
        printf("VALID\n");
    }
    else{
        printf("INVALID\n");
    }
return 0;
}