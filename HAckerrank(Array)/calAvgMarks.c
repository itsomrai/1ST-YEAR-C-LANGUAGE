#include<stdio.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;float marks;float avg;float sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%f",&marks);
        sum=sum+marks;
    }
    avg=sum/a;
    printf("%.2f",avg);
    return 0;
}
