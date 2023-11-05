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
    FILE *f4 = NULL;
    float pi = 4.0*atan(1.0);
    f1=fopen("prob2a_1.txt","w");
    f2=fopen("prob2a_2.txt","w");
    f3=fopen("prob2a_3.txt","w");
    f4=fopen("prob2a_4.txt","w");
    double theta,A=1,del=0.25*pi;
    double n1=1.0,n2=2.0,n3=2.5,n4=3.0;
    for(theta=1;theta<=4*pi;theta+=0.1)
    {
        fprintf(f1,"%lf\t%lf\n",x(theta),y(A,theta,n1,del));
        fprintf(f2,"%lf\t%lf\n",x(theta),y(A,theta,n2,del));
        fprintf(f3,"%lf\t%lf\n",x(theta),y(A,theta,n3,del));
        fprintf(f4,"%lf\t%lf\n",x(theta),y(A,theta,n4,del));
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
}
