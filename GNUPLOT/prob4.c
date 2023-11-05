#include<stdio.h>
#include<math.h>

double theta30(double t)
{
    double v1 =(3.0*sqrt(14.0))/4.0;
    double v2 = (5.0/3.0)*pow(cos(t),3)-cos(t);
    double out = v1*v2;
    return out;
}
double theta31(double t)
{
    return (sqrt(42)/8)*sin(t)*(5*cos(t)*cos(t)-1);
}
double theta32(double t)
{
    return (sqrt(105)/4)*pow(sin(t),2)*cos(t);
}
double theta33(double t)
{
    return sqrt(70)/8.0*pow(sin(t),3);
}
int main()
{
    FILE *f1 = NULL;
    FILE *f2 = NULL;
    FILE *f3 = NULL;
    FILE *f4 = NULL;
    f1=fopen("theta30.txt","w");
    f2=fopen("theta31.txt","w");
    f3=fopen("theta32.txt","w");
    f4=fopen("theta33.txt","w");
    float pi = 4.0*atan(1.0);
    double theta;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    for(theta=0;theta<=2*pi;theta+=0.01)
    {
        x1 = pow(theta30(theta),2)*cos(theta);
        y1 = pow(theta30(theta),2)*sin(theta);
        fprintf(f1,"%lf\t%lf\n",x1,y1);

        x2 = pow(theta31(theta),2)*cos(theta);
        y2 = pow(theta31(theta),2)*sin(theta);
        fprintf(f2,"%lf\t%lf\n",x2,y2);

        x3 = pow(theta32(theta),2)*cos(theta);
        y3 = pow(theta32(theta),2)*sin(theta);
        fprintf(f3,"%lf\t%lf\n",x3,y3);

        x4 = pow(theta33(theta),2)*cos(theta);
        y4 = pow(theta33(theta),2)*sin(theta);
        fprintf(f4,"%lf\t%lf\n",x4,y4);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
}