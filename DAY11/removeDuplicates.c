#include <stdio.h>
int removeDuplicates() {
int nums[]={1,2,3,4,4,5};
int numsSize=sizeof(nums);
if(numsSize ==0 ){
    printf("0");
}
int res =1;
for(int i=1;i<numsSize; i++){
    if(nums[i]!=nums[i-1]){
        nums[res]=nums[i];
        res++;
    }
}
printf(res);
}