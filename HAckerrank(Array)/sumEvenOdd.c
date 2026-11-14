#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;int val[100];int sumE=0;int sumOd=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&val[i]);
    }
    for(int i=0;i<a;i++){
        if(val[i]%2==0){
            sumE+=val[i];
        }
        else{
            sumOd+=val[i];
        }
    }
    printf("%d %d",sumE,sumOd);
    return 0;
}
