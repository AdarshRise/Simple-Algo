#include <stdio.h>

int main()
{
int N,x,MIN,LOC;
scanf("%d",&N);
x=N-1;
//scanf("%d",&x);
int A[N];// take it as a large array
for(int i=0;i<N;i++)
{
scanf("%d",&A[i]);
}
for(int i=0;i<x;i++)
{ MIN=A[i],LOC=i;
for(int j=i+1;j<N;j++)
{
if(MIN>A[j])
{
MIN=A[j];
LOC=j;
}
}
int temp=A[i];
A[i]=A[LOC];
A[LOC]=temp;

}
for(int i=0;i<N;i++)
printf(" %d",A[i]);
return 0;
}
