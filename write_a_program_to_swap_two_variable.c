//Write a program to swap two variable:
//a) By using temporary variable.
//b) Without using temporary variabl

#include<stdio.h>

int main() {
   int x, y, temp;
   printf("Enter the value of x and y: \n ");
   scanf("%d %d", &x, &y);
   printf("Before swapping x=%d, y=%d\n ", x, y);
    
   temp = x;
   x = y;
   y = temp;
   printf("After swapping x=%d, b=%d", x, y);
   return 0; 
}