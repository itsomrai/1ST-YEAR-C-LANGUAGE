#include <stdio.h>
int main()
{
 int n,freq[10]={0};
 scanf("%d",&n);
 if(n<0){
    n=-n;
 }
 if(n==0){
    freq[0]=1;
 }
 while(n>0){
    freq[n%10]++;
    n/=10;
 }
 for(int i=0;i<10;i++){
    if(freq[i]>0){
        printf("Digit %d occurs %d time(s)\n",i,freq[i]);
    }
 }
return 0;
}