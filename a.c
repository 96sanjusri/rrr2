#include<stdio.h>
#include<conio.h>
void main()
{
int num1, num2, num3;
clrscr();
printf("Enter the values of num1, num2 and num3");
scanf("%d %d %d", &num1, &num2, &num3);
printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
if (num1 > num2)
{
if (num1 > num3)
{
printf("num1 is the greatest among three\n");
}
else
{
printf("num3 is the greatest among three ");
}
}
else if (num2 > num3)
printf("num2 is the greatest among three\n");
else
printf("num3 is the greatest among three ");
getch();
}
