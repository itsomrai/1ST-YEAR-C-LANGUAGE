#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int a;int val;int z=0;int p=0;int n=0;
    scanf("%d",&a) ;
    for(int i=0;i<a;i++){
        scanf("%d",&val);
        if(val<0){
            n++;
        }
        else if(val>0){
            p++;
        }
        else{
            z++;
        }
    }
    printf("%d %d %d",p,n,z);
    return 0;
}
