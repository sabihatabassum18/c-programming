#include <stdio.h>
/*
Quardic equation
*/
int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two distinct real roots:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else {
        if (discriminant == 0) {
            root1 = -b / (2 * a);
            printf("The equation has one real root:\n");
            printf("Root = %.2lf\n", root1);
        } else {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("The equation has two complex roots:\n");
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
        }
    }

    return 0;
}

