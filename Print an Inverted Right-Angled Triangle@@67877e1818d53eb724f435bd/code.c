#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = n; n>=1;n--){
        for(int j =1;j<=i;j++){
        printf("*");
    }}
    return 0;
}