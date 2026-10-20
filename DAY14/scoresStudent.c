#include <stdio.h>
int main()
{
int grades[8];int threshold;int count=0;
printf("Enter grades:\n");
for(int i=0;i<8;i++){
    scanf("%d",&grades[i]);
}
printf("Threshold:");
scanf("%d",&threshold);
for(int i=0;i<8;i++){
if(grades[i]>threshold){
    count++;
}
}

printf("Number of Student Scoring above %d:%d\n",threshold,count);
return 0;
}