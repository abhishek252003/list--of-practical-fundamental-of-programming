/*Write a program to calculate the area and the circumference of a 
circle by using radius as the input provided by the user*/

#include <stdio.h>
#include <math.h>
int main()
{
  float radius, area;

  printf("Enter the radius of a circle\n");

  scanf("%f", &radius);

  area = 3.14159*radius*radius;
  printf("circumference of circle %f\n", 2*3.14*radius);

  printf("Area of the circle = %.2f\n", area);  // printing upto two decimal places


  return 0;
}