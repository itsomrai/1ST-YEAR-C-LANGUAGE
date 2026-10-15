#include <stdio.h>
int main() {
int nums[]={1,2,3,4,4,5};
int numsSize=sizeof(nums)/sizeof(nums[0]);
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
    printf("%d\n",res);
    for(int i=0;i<res;i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
return 0;
}