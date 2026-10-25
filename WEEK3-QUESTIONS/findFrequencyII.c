#include <stdio.h>
int main()
{
int a;int freq[10]={0};
scanf("%d",&a);
if(a<0){
   a=-a;
}
if(a==0){
   freq[0]=1;
}
while(a>0){
   freq[a%10]++;
   a/=10;
}
for(int i=0;i<10;i++){
   if(freq[i]>0){
      printf("Digit %d occurs %d times",i,freq[i]);
   }
}
return 0;
}