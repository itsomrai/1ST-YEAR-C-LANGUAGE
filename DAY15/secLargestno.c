#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((a>b && a<c)||(a>c && a<b)){
    printf("%d is second highest number",a);
}
else if((b>a && b<c)||(b>c && b<a)){
    printf("%d is second highest number",b);
}
else if((c>b && c<a)||(c>a && c<b)){
    printf("%d is second highest number",c);
}
return 0;
}