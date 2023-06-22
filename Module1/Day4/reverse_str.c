#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[40];  
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", str);  
      
    // using strrev() function to reverse a string  
    printf (" \n After the reverse of a string: %s ", strrev(str));  
    return 0;  
}