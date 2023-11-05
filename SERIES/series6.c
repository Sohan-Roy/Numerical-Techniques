#include<stdio.h>
#include<math.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("series6.txt","w");
    float z,t,sum,R,acc=0.00001,C = 0.35503;
    int n;
    for(z=-10;z<=0;z+=0.05)
    {
        t=1.0;sum=t;n=1;
        do{
            R=pow(z,3)/(3*n*(3*n-1));
            t*=R;
            sum+=t;
            n++;
        }while(fabs(t/sum)>acc);
        sum*=C;
        fprintf(fp,"%f \t %f \n",z,sum);
    }
    fclose(fp);
}