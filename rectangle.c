#include <stdio.h>

int main() {
 double lenght, width, area;
 
 printf("Rectangle Area Calculator\n");
 printf("Enter lenght: ");
 scanf("%lf", &lenght);

 printf("Enter width: ");
 scanf("%lf", &width);

 area = lenght * width;
 printf("Area = %.2f\n", area);

 return 0;
}
