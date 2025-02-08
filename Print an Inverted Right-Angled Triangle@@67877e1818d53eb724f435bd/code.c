#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = n; n>=1;n--){
        for(int j =i;j<=1;j--){
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}