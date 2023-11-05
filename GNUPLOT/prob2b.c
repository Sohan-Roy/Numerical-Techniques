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
    f1=fopen("prob2b_1.txt","w");
    f2=fopen("prob2b_2.txt","w");
    f3=fopen("prob2b_3.txt","w");
    double theta,n=2,del=0.25*pi;
    double A1=0.5, A2=1.0, A3=2.0;
    for(theta=1;theta<=4*pi;theta+=0.1)
    {
        fprintf(f1,"%lf\t%lf\n",x(theta),y(A1,theta,n,del));
        fprintf(f2,"%lf\t%lf\n",x(theta),y(A2,theta,n,del));
        fprintf(f3,"%lf\t%lf\n",x(theta),y(A3,theta,n,del));
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}