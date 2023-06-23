#include <stdio.h>

struct Complex {
    double real;
    double img;
};

void R_Complex(struct Complex *c) {
    printf("Enter the real part: ");
    scanf("%lf", &(c->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(c->img));
}

void W_Complex(struct Complex c) {
    if (c.img >= 0)
        printf("Complex number: %.2f + %.2fi\n", c.real, c.img);
    else
        printf("Complex number: %.2f - %.2fi\n", c.real, -c.img);
}

// for multiply two complex numbers
struct Complex multiply_Com(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.img * c2.img;
    result.img= c1.real * c2.img + c1.img * c2.real;
    return result;
}
//for adding the two complex numbers
struct Complex add_Com(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img+ c2.img;
    return result;
}

int main() {
    struct Complex complex1, complex2, product,sum;

    printf("Enter the first complex number--:\n");
    R_Complex(&complex1);

    printf("\nEnter the second complex number--:\n");
    R_Complex(&complex2);

   

    printf("First complex number--:\n");
    W_Complex(complex1);

    printf("Second complex number--:\n");
    W_Complex(complex2);

    product = multiply_Com(complex1, complex2);
    printf("Product of the complex numbers---\n");
    W_Complex(product);

    sum = add_Com(complex1, complex2);
    printf("\n---Sum of the complex numbers---\n");
    W_Complex(sum);


    return 0;
}