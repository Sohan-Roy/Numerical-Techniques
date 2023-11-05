#include<stdio.h>
#include<math.h>
double j0(double z)
{
    return sin(z)/z;
}
double j1(double z)
{
    double out;
    out = (sin(z)/pow(z,2))-(cos(z)/z);
    return out;
}
double bn(double z, int n)
{
    double out;
    if(n==0)
    {
        return j0(z);
    }
    else if(n==1)
    {
        return j1(z);
    }
    else
    {
        out = (((2*n-1)*bn(z,n-1))/z) - bn(z,n-2); 
        return out;
    }
}
main()
{
    FILE *f = NULL;
    f = fopen("Besssel.txt","w");
    double z;
    double bn(double z, int n);
    for(z=0;z<=5;z+=0.001)
    {
        fprintf(f,"%lf \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n",z,bn(z,0),bn(z,1),bn(z,2),bn(z,3),bn(z,4),bn(z,5));
    }
    fclose(f);
}

