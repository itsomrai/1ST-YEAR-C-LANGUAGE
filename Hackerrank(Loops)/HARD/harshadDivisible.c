#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;int sum=0;
    scanf("%d",&a);
    while(a!=0){
        int temp=a%10;
        sum+=temp;
        a/=10;
    }
        if(9%sum==0){
            printf("YES");        
        }
        else{
            printf("NO");
        }
        

    return 0;
}
