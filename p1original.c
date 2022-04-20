#include<stdio.h>
void input(float*base, float*height)
{
  printf("ENTER THE VALUE OF BASE AND HEIGHT\n ");
  scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("the area of triangle is %0.3f",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}