#include<stdio.h>
int main()
{

int num, month, days;
printf("enter number of days\n");
scanf("%d", &num);
month=(num/12);
days=(num%30);
printf("%d monht %ddays", month, days);
return 0;

}