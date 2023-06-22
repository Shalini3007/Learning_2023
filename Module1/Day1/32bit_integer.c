#include<stdio.h>
#include<conio.h>

int main(){
    
    int num,op_type,result;

    printf("Enter the Integer: ");
    scanf("%d",&num);
    printf("Enter the operation type(1,2,3): ");
    scanf("%d",&op_type);
    
    result=bit_operations(num,op_type);

    printf("Result : %d\n",result);
    return 0;
}

    int bit_operations(int num,int op_type){
    switch(op_type){
        case 1:
        num |=(1<<0);  //settig the first bit
        break;

        case 2:
        num &=~(1<<30); //clear 31st bit
        break;

        case 3:
        num ^=(1<<15);   //toggle 16th bit
        break;
        default:
        printf("Invlid operation type\n");
        break;
    }
    return num;
    }
