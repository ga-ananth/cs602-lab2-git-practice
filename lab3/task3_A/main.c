#include <stdio.h>

// Function declaration
void quadratic(int coeff1, int coeff2, int coeff3, float *root1, float *root2);

// Program entry point
int main()
{
    int a, b, c;
    float r1, r2;

    printf ("Quadratic Program\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    quadratic(a, b, c, &r1, &r2);
    printf("Roots are %3.2f and %3.2f\n", r1, r2);
}
