#include <stdio.h>

int main() {
	float base, height, area;

	printf("Please enter a number for the base of your triangle: ");
	scanf("%f", &base);

	printf("Please enter a number for the height of your triangle: ");
	scanf("%f", &height);

	area = (base * height) / 2;
	printf("The area of the triangle is: %f\n", area);

	return 0;
}
