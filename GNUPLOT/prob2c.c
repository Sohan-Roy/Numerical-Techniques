#include<stdio.h>
#include<math.h>

double x(double theta)
{
    return sin(theta);
}
double y(double A, double theta, double n, double del)
{
    return A*sin(n*theta+del);
}
int main()
{
    FILE *f1 = NULL;
    FILE *f2 = NULL;
    FILE *f3 = NULL;
    float pi = 4.0*atan(1.0);
    f1=fopen("prob2c_1.txt","w");
    f2=fopen("prob2c_2.txt","w");
    f3=fopen("prob2c_3.txt","w");
    double theta,n=2,A=1;
    double del1=0.25*pi, del2=0.5*pi, del3=pi;
    for(theta=1;theta<=4*pi;theta+=0.1)
    {
        fprintf(f1,"%lf\t%lf\n",x(theta),y(A,theta,n,del1));
        fprintf(f2,"%lf\t%lf\n",x(theta),y(A,theta,n,del2));
        fprintf(f3,"%lf\t%lf\n",x(theta),y(A,theta,n,del3));
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}