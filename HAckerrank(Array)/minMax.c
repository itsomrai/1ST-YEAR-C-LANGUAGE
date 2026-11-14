#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int a;int val;int max=INT_MIN;int min=INT_MAX;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&val);
    
        if(val>max){
            max=val;
        
        }
        if(val<min){
            min=val;
        }
    }
        printf("Maximum = %d\n",max);
        printf("Minimum = %d",min); 
    return 0;
}

