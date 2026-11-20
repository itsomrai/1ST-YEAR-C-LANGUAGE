#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;int val[1000];int found=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    } 
    int tar;
    scanf("%d",&tar);
    for(int i=0;i<n;i++){
        if(val[i]>tar){
            found=i+1;
            break;
        }
    } 
    printf("%d",found);
    
    return 0;
}
