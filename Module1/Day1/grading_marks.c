#include<stdio.h>
#include<conio.h>

int main()
{
    int marks;

    printf("Enter the marks : ");
    scanf("%d",&marks);

    if(marks>=0 && marks<=49){
        printf("Grade F");
    }else if(marks>=50 && marks<=59){
        printf("Grade D");
    }else if(marks>=60 && marks<=74){
        printf("Grade C");
    }else if(marks>=75 && marks<=89){
        printf("Grade B");
    }else if(marks>=90 && marks<=100){
        printf("Grade A");
    }
    else{
        printf("INVALID,Please check again the marks should only 0(min)-100(max)");
    }
    return 0;
}