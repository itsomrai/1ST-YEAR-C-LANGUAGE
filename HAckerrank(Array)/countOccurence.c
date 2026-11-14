#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;int x[100];int tar;int count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&x[i]);
    }
    
    scanf("%d",&tar);
    for(int i=0;i<a;i++){
    if(x[i]==tar){
        count++;
    }
    }
    printf("%d",count);
        return 0;
}
