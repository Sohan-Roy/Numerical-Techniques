#include<stdio.h>
#include<math.h>
int main()
{
    float pi = 4.0*atan(1.0);
    float x,t,sum,R,acc=0.00001;
    int n;
    for(x=0;x<=1;x+=0.1)
    {
        t=x;
        sum=t;
        n=1;
        do{
            R = -(pi*pi*pow(x,4))/(4*n+1);
            t*=R;
            sum+=t;
            n++;
        }while(fabs(t/sum)>acc);
        sum*=cos(pi*x*x/2.0);
        printf("x=%f, F(x) = %f\n",x,sum);
    }
}