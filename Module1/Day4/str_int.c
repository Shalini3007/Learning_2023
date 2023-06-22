#include<stdio.h>
int str_to_Int(char str[]){
    int res =0;
    for(int i =0; str[i]!='\0'; i++){
        res = res*10+(str[i]-'0');
    }
    return res;
}

int main(){
    char str[30];
    printf("Enter the string:");
    scanf("%s", &str);

    int result = str_to_Int(str);
    printf("%d", result);
    return 0;
}