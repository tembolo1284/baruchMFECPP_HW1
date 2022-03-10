#include <stdio.h>

int main()
{
	float base{}, height{}, area{};

	printf("Please enter a number for the base of your triangle: ");
	float b = scanf_s("%f", &base);

	printf("Please enter a number for the height of your triangle: ");
	float h = scanf_s("%f", &height);

	area = (base * height) / 2;
	printf("The area of the triangle is: %f", area);

	return 0;
}