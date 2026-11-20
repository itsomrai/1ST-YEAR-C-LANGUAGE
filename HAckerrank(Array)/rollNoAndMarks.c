#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ int n;int val[1000],val2[1000];int found=-1;
    scanf("%d",&n);
      for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
      }
      for(int i=0;i<n;i++){
        scanf("%d",&val2[i]);
      }
      int tar;
      scanf("%d",&tar);
     for(int i=0;i<n;i++){
        if(val[i]==tar){
            found=i;
            break;
        }
      } 
      if(found==-1){
        printf("Not Found");
      }
      else{
        printf("%d",val2[found]);
      }
        return 0;
}
