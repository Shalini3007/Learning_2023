#include<stdio.h>
#include<conio.h>

int main(){
    
    double a,b;
    char op;

    printf("Enter the first number : ");
    scanf("%lf",&a);
    printf("Enter the opertor for specific opertion (+,-,/,*): ");
    scanf("%s",&op);
    printf("Enter the second number : ");
    scanf("%lf",&b);

    switch(op){
        case '+':
        printf("result :%lf+%lf=%lf",a,b,a+b);
        break;
        case '-':
        printf("result :%lf-%lf=%lf",a,b,a-b);
        break;
        case '/':
        printf("result :%lf/%lf=%lf",a,b,a/b);
        break;
        case '*':
        printf("result :%lf*%lf=%lf",a,b,a*b);
        break;
        default:
        printf("Error! operator is not correct.");
    }
    return 0;
}