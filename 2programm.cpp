#include <iostream>
#include <stdio.h>

using namespace std;

int main() /*��������� ������� �������� �� ������ ������� - �� ���� � ���������� �������� x � n
� ��������� ����� y ����� ��� ������� �� ������� ������������ x*y �� n ��������� 1*/
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
