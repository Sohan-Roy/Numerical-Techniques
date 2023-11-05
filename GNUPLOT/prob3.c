/*Plotting a periodic function in gnuplot*/

#include<stdio.h>
#include<math.h>

main()
{
    FILE *f = NULL;
    float x,y,z,x1;
    int n;
    f = fopen("periodic.txt","w");
    float pi = 4.0*atan(1.0);
    for(x=-(6*pi);x<=6*pi;x+=0.001*pi)
    {
        n = (int) (x/(2.0*pi));
        x1 = x-(2*pi*n);
        z = fabs(x1);
        if(z>=0 && z<pi)
        {
            y = z;
        }
        if(z>=pi && z<2*pi)
        {
            y = 2*pi - z;
        }
        fprintf(f,"%f \t%f\n", x,y);

    }
    fclose(f);
}