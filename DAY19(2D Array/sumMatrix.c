#include <stdio.h>
int main(){
int r,c;
scanf("%d %d",&r,&c);
int val[r][c];
int val2[r][c];
int res[r][c];
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){//[1,2,3,4,5]
    scanf("%d",&val[i][j]);
}
}
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&val2[i][j]);
}
}
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
    res[i][j]=val[i][j] + val2[i][j];
}
}
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
    printf("%d",res[i][j]);
}
printf("\n");
}

return 0;
}
