

//5. Write a program to evaluate each of the following equations.
//(i)V = u + at. (ii)S = ut + 1 / 2at^2 (iii)T = 2 * a + √b + 9c (iv) H = √(b^2+ p^2)
#include<stdio.h>
#include<math.h>
int main()
{
	int u,a,t,a1,b1,c1,pn,bs;
	double V,S,T,H;
	printf("Enter initial velocity,\n acceleration, time");
	scanf("%d%d%d",&u,&a,&t);
	printf("Enter value of a,b,c");
	scanf("%d%d%d",&a1,&b1,&c1);
	printf("Enter base and perpendicular");
	scanf("%d%d",&bs,&pn);
	V=u+a*t;
	S=u*t+(0.5*a*t*t);
	T=2*a+sqrt(b1)+9*c1;
	H=sqrt(pow(bs,2)+pow(pn,2));
	printf("V = %f\n",V);
	printf("S = %f\n",S);
	printf("T = %f\n",T);
	printf("H = %f\n",H);

	return 0;
}


