#include<stdio.h>
#define Order 2
#define Len 5
float h[Len] = {0.0,0.0,0.0,0.0,0.0}, sum;
void main()
{
int j, k;
float a[Order+1] = {1, 0.5, 0.0};
float b[Order+1] = {1, -0.63, 0.72};
for(j=0; j<Len; j++)
{
sum = 0.0;
for(k=1; k<=Order; k++)
{
if ((j-k) >= 0)
sum = sum+(b[k]*h[j-k]);
}
if (j <= Order)
h[j] = a[j]-sum;
else
h[j] = -sum;
printf (" %f ",h[j]);
}
}