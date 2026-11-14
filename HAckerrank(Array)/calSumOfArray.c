#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  int a;int val;int sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&val);
        sum+=val;
    }
    printf("%d",sum);
    return 0;
}
