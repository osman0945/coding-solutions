#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a,b,r1,r2;
    float c,d,r3,r4;
    scanf("%d %d",&a, &b);
    scanf("%f %f",&c, &d);
    r1 = a+b;
    r2 = a-b;
    r3 = c+d;
    r4 = c-d;
    printf("%d %d \n",r1,r2);
    printf("%.1f %.1f",r3,r4);
 
    return 0;
}
