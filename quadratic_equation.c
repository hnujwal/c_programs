#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter the value for a b c:");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0) {
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        printf("the real roots=%f  %f",r1,r2);
    }
    else if (d==0){
        r1=-b/(2*a);
         r2=-b/(2*a);
         printf("the roots are equale=%f%f",r1,r2);
    }
    else{
        printf("the roots are imaginary");
        return 0;

    }
}