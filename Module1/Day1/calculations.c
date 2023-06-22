#include<stdio.h>
#include<conio.h>

int main(){

    int roll_no;
    char name[50];
    float physics,chemistry,maths,total_marks,percentage;

    printf("Enter Roll No :");
    scanf("%d",&roll_no);
 
    printf("Enter name :");
    scanf("%s",&name);

    printf("Enter marks in physics :");
    scanf("%f",&physics);

    printf("Enter marks in chemistry :");
    scanf("%f",&chemistry);

    printf("Enter marks in maths :");
    scanf("%f",&maths);

    total_marks=physics+chemistry+maths;
    percentage=(total_marks/3);

    printf("\n-------------student card--------------\n");
    printf("Name : %s\n",name);
    printf("Roll no : %d\n",roll_no);
    printf("physics ontained Marks : %.2f\n",physics);
    printf("chemistry ontained Marks : %.2f\n",chemistry);
    printf("maths ontained Marks : %.2f\n",maths);
    printf("Total Marks : %.2f\n",total_marks);
    printf("Percentage : %.2f\n",percentage);
    
    return 0;

}