#include <stdio.h>

int main() {
 double lenght, width, area, square;
 
 printf("Rectangle Area Calculator\n");
 printf("Enter lenght: ");
 scanf("%lf", &lenght);

 printf("Enter width: ");
 scanf("%lf", &width);

 area = lenght * width;
 printf("Area = %.2f\n", area);

 square = (lenght + width) * 2;
 printf("Square = %.2f\n", square);

 return 0;
}
