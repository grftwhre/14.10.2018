#include <iostream>
#include <stdio.h>

using namespace std;

int main() /*программа находит обратный по модулю элемент - то есть с клавиатуры вводится x и n
и требуется найти y такой что остаток от деления произведения x*y на n равняется 1*/
{
    int m,n,x,y,r;
    m=0;
    printf("Enter x\n");
    scanf("%d", &x);
    printf("Enter n\n");
    scanf("%d", &n);
    do{
        m++;
        r=(m*n+1)%x;
    }while(r!=0);
    y=(m*n+1)/x;
    printf("y = %d", y);
    return 0;
}
