#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;
int main() //ввод числа с клавиатуры и проверка простое оно или составное
{
 int n,r,i;
 i=1;
    printf("Enter x\n");
    scanf("%d", &n);
if (n==1)
    printf("prime");
else
    r=n%i;
do{
i++;
r=n%i;
}while (r!=0);
    if (i==n)
    printf("%d - prime", n);
    else
    printf("%d - composite", n);
    return 0;
}
