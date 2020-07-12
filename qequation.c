#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	while (true)
	{
		int a, b, c, determinant, d;
		double x1, x2;
		printf("Equation format:\n");
		printf("\tax^2 + bx + c = 0\n\n");
		printf("Enter the value of a : ");
		scanf("%d", &a);
		printf("Enter the value of b : ");
		scanf("%d", &b);
		printf("Enter the value of c : ");
		scanf("%d", &c);
		determinant = pow(b, 2) - 4 * a * c;
		if (determinant < 0)
		{
			printf("\nSorry,x doesn't have a real value.");
			break;
		}
		x1 = (-b + sqrt(determinant)) / (2 * a);
		printf("\nSolutions: \n");
		printf("x1 = %0.2lf \n", x1);
		x2 = (-b - sqrt(determinant)) / (2 * a);
		printf("x2 = %0.2lf", x2);
		return 0;
	}
}