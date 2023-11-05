#include<stdio.h>
#include<math.h>
int main()
{
    float x, t, sum, R, z, acc;
    int i;
    for(x=0;x<=2;x+=1)
    {
        t=1.0;
        sum=t;
        for(i=1;i<=20;i+=1)
        {
            R = 1/x;
            t*=R;
            sum+=t;
        }
        sum-=(1/x);
        printf("x = %f, sum = %f \n",x,sum);
    }
}
