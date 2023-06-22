#include <stdio.h>
#include <stdint.h>
 void Pf_Exp(double a) {
  // bit representation of double
     unsigned long long * bits =(unsigned long long *)&a;

     // Extract exponent 
     unsigned long long exp = (*bits >> 52) & 0x7FF;

     // exponent to hexadecimal and binary formats
     printf("exponent (hex): 0x%llx\n", exp);
    printf("exponent (binary): 0b");

            for (int i = 0; i < 11; i++) {
                unsigned long long  bit = (exp >> i) & 1;
                printf("%llu", bit);
            }
 }
 int main() 
{
     double a = 0.7;
     Pf_Exp(a);
     return 0;
}