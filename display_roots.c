/*
The program below shows the roots of a quadratic equation.
*/

#include<stdio.h>
#include<math.h>

void display_roots(double a, double b, double c)

{
	double delta;
	double x1, x2;

	delta = b * b - 4 * a * c;
	if (delta >= 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);

		printf("x1 =%f, x2= %f\n", x1, x2);
	}
	else
		printf("No real root! \n");
}

/*
If we write a function that calculates
for all three cases where the discriminant(delta) is 
greater than 0, equal to 0 and less than 0.
*/

void calculate_roots(double a, double b, double c) {
    double discriminant, root1, root2, real_part, imaginary_part;

    discriminant = b * b - 4 * a * c;

    // If the discriminant is positive
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: \n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    // If the discriminant is zero
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: \n");
        printf("Root = %.2lf\n", root1);
    }
    // If the discriminant is negative
    else {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different: \n");
        printf("Root 1 = %.2lf + %.2lfi\n", real_part, imaginary_part);
        printf("Root 2 = %.2lf - %.2lfi\n", real_part, imaginary_part);
    }
}

int main(void)
{
	double a, b, c;
	printf("a: ");
	scanf("%lf ", &a);

	printf("b: ");
	scanf("%lf", &b);

	printf("c:");
	scanf("%lf", &c);

	display_roots(a, b, c);
        calculate_roots(a, b, c);

	return 0;
}
