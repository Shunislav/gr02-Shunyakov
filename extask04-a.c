#include <math.h>
#include <stdio.h>


double f(double x)
{
    return -3.0f * cosf(x);
}

int main()
{



double a,b;
printf("a,b: ");
scanf("%lf %lf", &a, &b);
double e;
printf("e: ");
scanf("%lf",&e);

while(1)
{
    double c = (a + b) / 2.0f;
    double fa = f(a);
    double fc = f(c);

    if (fabsf(fc) <= e)
    {
    printf("x: %.5lf\n", c);
    printf("y: %.5lf\n", fc);
        break;
    }

    if (fa * fc> 0.0f)
    
        
        a=c;
    
else

        b=c;
}
return 0;

}




