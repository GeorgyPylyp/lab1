#include <stdio.h> //підключення бібліотек
#include <math.h>
int main() { 
  int c; // оголошення функції
  int p;
  int a,b; // оголошення локальних змінних
  printf("\n довжина першої сторони a=");//виведення даних
  scanf("%d",&a); //введення даних
  printf("\n довжина другої сторони b=");
  scanf("%d",&b);
  c=pow(a*a+b*b,0.5);
  p=a+b+c;
  printf("a \t b \t c \t p \n");
  printf("%d\t%d\t%d\t%d", a, b, c, p );
  return 0;
}