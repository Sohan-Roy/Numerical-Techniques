#include<stdio.h>
#include<math.h>

main()
{
    FILE *fp = NULL;
    fp=fopen("circle.txt","w");
    float x,y,r=3.0,theta;
    float pi = 4.0*atan(1.0);
    for(theta=0;theta<=2*pi;theta+=0.1)
    {
        x = 5.0+r*cos(theta);
        y = 5.0+r*sin(theta);
        fprintf(fp,"%f \t %f\n", x,y);
    }
    fclose(fp);
}