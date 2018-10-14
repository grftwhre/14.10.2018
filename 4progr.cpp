#include <iostream>
#include <stdio.h>
using namespace std;

int main() //программа ищет сумму элементов массива кратных ЛИБО 27 ЛИБО 72
{
    int i,k,r1,r2,s;
    s=0;
    printf("Enter size\n");
    scanf("%d",&i);
    int a[i];
     for (k=0; k<i; k++)
        scanf("%d",&a[k]);
     for (k=0; k<i; k++)
     {
        r1=a[k]%27;
        r2=a[k]%72;
        if ((r1==0) || (r2==0))
         s+=a[k];
        if ((r1==0) && (r2==0))
         s-=a[k];
     }
     printf("%d",s);
    return 0;
}
