#include <stdio.h>
int main(){
int r,c;
int a;
scanf("%d %d",&r,&c);
int val[r][c];
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&val[i][j]);
}
}
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
    printf("%d ",val[i][j]);
}
printf("\n");
}
return 0;
}