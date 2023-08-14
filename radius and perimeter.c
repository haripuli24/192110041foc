#include <stdio.h>
#include <math.h>

int main() {
    double radius, perimeter, area;
    const double PI = 3.14159265;

    // Input the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate perimeter and area
    perimeter = 2 * PI * radius;
    area = PI * pow(radius, 2);

    // Output the results
    printf("Perimeter of the circle: %.2lf\n", perimeter);
    printf("Area of the circle: %.2lf\n", area);

    return 0;
}

