#include<stdio.h>

int main(){

    int x,y,max;

    printf("Enter the value of x an y: ");
    scanf("%d %d",&x,&y);
    max = x>y ? x:y;
    printf("Biggest number is : %d ",max);
    return 0;
}