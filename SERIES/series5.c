#include<stdio.h>
#include<math.h>
int main()
{
    FILE *fp = NULL;
    fp=fopen("series5.txt","w");
    float z,t,sum,acc=0.00001,R;
    float pi = 4.0*atan(1.0);
    int k,n=2;
    for(z=0;z<=5;z+=0.01)
    {
        t=1/(2.0*sqrt(pi));
        sum=t;
        k=2;
        do
        {
            /* code */
            R=((4*pow(z,2))/(k*(k-1)))*(0.5+(n-k)/2);
            t*=R;
            sum+=t;
            k+=2;
        } while (fabs(t/sum)>acc);
        fprintf(fp,"%f \t %f \n",z,sum);
    }
}