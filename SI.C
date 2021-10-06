#include<stdio.h>
#include<conio.h>
float intrst()
{
 float p,r,t,i;
 printf("enter values=");
 scanf("%f%f%f",&p,&r,&t);
 i=p*r*t/100;
 return i;
}
void main()
{
 float s;
 s=intrst();
 printf("%f",s);
 getch();
}
