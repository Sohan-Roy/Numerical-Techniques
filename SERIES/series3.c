#include<stdio.h>
#include<math.h>
int fact(int n)
{
    int i,fact=1;
    if(n==0)
    {
        fact=1;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
    }
    return fact;
}
float bessel(float x, int n)
{
    float t,sum,R,z,acc=0.00001;
    t=1.0/fact(n);
    sum=t;
    int k=1;
    do{
        R=-x*x/(4*k*(n+k));
        t*=R;
        sum+=t;
        k++;
    }
    while(fabs(t/sum)>acc);
    sum*=pow(x/2,n);
    return sum;
}
int main()
{
    FILE *fp = NULL;
    fp = fopen("series3.txt","w");
    float x;
    for(x=0;x<=10;x+=0.01)
    {
        fprintf(fp,"%f \t %f \t %f \t %f \n",x,bessel(x,0),bessel(x,1),bessel(x,2));
    }
    fclose(fp);
}