#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;int rev=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0){
        int temp=n%10;
        rev=rev*10+temp;
        n/=10;
    } 
    if(rev==t)
    
    printf("YES"); 
    else{
        printf("NO");
    } 
    return 0;
}
