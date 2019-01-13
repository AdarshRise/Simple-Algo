#include <stdio.h>
 
int ricerca_fib(int a[], int n, long x)
{ 
    int inf=0, pos, k;
    //static 
	int kk= -1, nn=-1, fib[]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
 
if(nn!=n)
{ 
    k=0;
    while(fib[k]<n) k++;
    kk=k;
    nn=n;
}
else
    k=kk;
 
while(k>0)
{
    pos=inf+fib[--k];
    if((pos>=n)||(x<a[pos]));
    else if (x>a[pos])
    {
        inf=pos+1;
        k--;
    }
 
    else {
        return pos;
    }
}
    return -1;
}
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10},x=7;
printf("%d",ricerca_fib(a,10, x));

return (0);
}
