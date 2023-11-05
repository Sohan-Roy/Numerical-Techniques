#include<stdio.h>
#include<math.h>
int main()
{
    FILE *f = NULL;
    f = fopen("series2.txt","w");
    float x,t,sum,z,acc=0.00001,R;
    float pi = 4.0*atan(1.0);
    int n;
    for(x=0;x<=pi;x+=0.01)
    {
        t=1.0;
        sum=t;
        n=1;
        do{
            R = -(x*x)/(2*n*(2*n-1));
            t*=R;
            sum+=t;
            n++;
            z=fabs(t/sum);
        }
        while(z>acc);
        fprintf(f,"%f \t %f \n",x,sum);
    }
    fclose(f);
}