#include<stdio.h>
void toggle_Str (char str[]){
    for(int i =0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
        }
        else if(str[i] >='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
    }
}

int main(){
    char str[20];
    printf("Enter string:");
    scanf("%s", &str);
    toggle_Str(str);
    printf("%s", str);

}