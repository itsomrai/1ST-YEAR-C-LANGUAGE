#include <stdio.h>
int main()
{
for(char c='A';c<='D';c++){
    for(int s=0;s<'D'-c;s++){
        printf(" ");
    }
    for(char ch='A';ch<=c;ch++){
        printf("%c",ch);
    }
    printf("\n");
}
return 0;
}