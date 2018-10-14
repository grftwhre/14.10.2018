#include <iostream>
#include <stdio.h>
using namespace std;
int main() /*программа ищет минимальную сумму элементов массива
 отстоящих друг от друга не менее чем на четыре*/
{
    int N,k,l;
    printf("Enter size\n");
    scanf("%d",&N);
    int *a = new int[N];
     for (k=0;k<N;k++)
     {
        scanf("%d",&a[k]);
     }
    int s=a[0]+a[4];
    for(k=0;k<N-4;k++)
    {
        for (l=k+4;l<N;l++)
        {
            if(a[k]+a[l]<s)
            s=a[k]+a[l];
        }
    }
    printf("%d",s);
    return 0;
}
