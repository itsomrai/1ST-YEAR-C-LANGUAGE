#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int a;int val[100];int tar;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&val[i]);
    }
    scanf("%d",&tar);
    int first =-1,last=-1;
    for(int i=0;i<a;i++){
        if(val[i]==tar){
            first=i;
            break;
        }
    }
    for(int i=a-1;i>=0;i--){
        if(val[i]==tar){
            last=i;
            break;
        }
    }
    printf("%d %d",first,last);
     
    return 0;
}
