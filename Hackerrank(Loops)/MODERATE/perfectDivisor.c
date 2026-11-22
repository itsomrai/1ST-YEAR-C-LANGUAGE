#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;int sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++){
      if(a%i==0){
        sum+=i;
      }
    }
    if(sum==a){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
