#include <math.h>

// Function: quadratic
// Description: implements the quadratic equation
// Parameters: int, int, int: coefficients, float *, float *, pointer to roots
// Return: void
// Error Avoid division by zero
void quadratic(int coeff1, int coeff2, int coeff3, float *root1, float *root2)
{
    if (coeff1 == 0)
    {
        // Avoid division by zero
        *root1 = 0.0;
        *root2 = 0.0;
    }
    else
    {
        // Implement quadratic equation
        *root1=(-coeff2+sqrt((coeff2*coeff2)-(4*coeff1*coeff3)))/(2*coeff1);
        *root2=(-coeff2-sqrt((coeff2*coeff2)-(4*coeff1*coeff3)))/(2*coeff1);
    }
}
