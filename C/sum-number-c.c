#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,intsum,intdiff;
   float c,d,floatsum,floatdiff;
   scanf("%d%d",&a,&b);
   scanf("%f%f",&c,&d);
   intsum=a+b;
   intdiff=a-b;
   floatsum=c+d;
   floatdiff=c-d;
   printf("%d %d\n",intsum,intdiff);
   printf("%0.1f %0.1f",floatsum,floatdiff);
    return 0;
}