#include <iostream>
#include <stdio.h>
using namespace std;
int main() //программа вычисляет среднее арифмитическое последовательности чисел (последовательность оканчивается нулем)
{
    int n;
    float f;
    int k=0;
    double s=0;
    f=0;
    printf("Enter n\n");
    do
    {
    cin >> n;
        k++;
        s+=n;
    }
    while(n!=0);
    f=s/k;
    cout << f <<endl;
    return 0;
}
