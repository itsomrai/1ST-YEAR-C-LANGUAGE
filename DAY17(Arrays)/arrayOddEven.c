#include <stdio.h>
int main()
{
int a[100];
int n;int even=0;int odd=0;
printf("Enter the size");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
printf("Even=%d \n Odd =%d",even,odd);
return 0;
}