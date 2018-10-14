#include <iostream>
#include <stdio.h>
using namespace std;
int minimal(int a,int b,int c)
 {
    int k;
    int x=a;
    int mass[3];
    mass[1]=a;
    mass[2]=b;
    mass[3]=c;
     for (k=1;k<4;k++)
     {
        if (mass[k]<x)
        x=mass[k];
     }
 return(x);
 };
 int maximum(int a,int b,int c)
 {
    int k;
    int x=a;
    int mass[3];
    mass[1]=a;
    mass[2]=b;
    mass[3]=c;
     for (k=1;k<4;k++)
     {
        if (mass[k]>x)
        x=mass[k];
     }
 return(x);
 };
 float average(int a, int b, int c)
 {
    return((a+b+c)/3);
 };
 int medial(int a,int b,int c)
 {
     int x=a;
     int y=a;
     int z=a;
     int k;
     int mass[3];
     mass[1]=a;
     mass[2]=b;
     mass[3]=c;
     for (k=1;k<4;k++)
     {
        if (mass[k]>x)
        x=mass[k];
     }
     for (k=1;k<4;k++)
     {
        if (mass[k]<y)
        y=mass[k];
     }
     for (k=1;k<4;k++)
     {
         if ((mass[k]!=x)&&(mass[k]!=y))
        z=mass[k];
     }
     return(z);
 };
int main()
{
    int a,b,c,x,y,p;
    float z;
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
printf("Enter c\n");
scanf("%d",&c);
        x=minimal(a,b,c);
        y=maximum(a,b,c);
        z=average(a,b,c);
        p=medial(a,b,c);
        printf("min = %d\n",x);
        printf("max = %d\n",y);
        printf("med = %d\n",p);
        printf("avg = %f\n",z);
  std::swap(a,b);
  std::swap(b,c);
    printf("%d,%d,%d",a,b,c);
    return 0;
}
