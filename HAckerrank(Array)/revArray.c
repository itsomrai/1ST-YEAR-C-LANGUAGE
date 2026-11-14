#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ int a;int val[100];int rev=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&val[i]);
        
    }
    for(int i=a-1;i>=0;i--){
        printf("%d ",val[i]);
    }
    
    
    return 0;
}
