#include<iostream>
#include<conio.h>
using namespace std;
void merge(int A[ ] , int start, int mid, int end) {
 //stores the starting position of both parts in temporary variables.
int p = start ,q = mid+1;

int Arr[end-start+1] , k=0;//dynamic allocation of dummy array

for(int i = start ;i <= end ;i++) {
    if(p > mid)      //checks if first part comes to an end or not .
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end)   //checks if second part comes to an end or not
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])     //checks which part has smaller element.
      Arr[ k++ ] = A[ p++ ];

   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
   /* Now the real array has elements in sorted manner including both 
        parts.*/
     A[ start++ ] = Arr[ p ] ;                          
  }
}
int l=0;
void merge_sort (int A[ ] , int start , int end )
   {
           if( start < end ) 
	 {
           int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (A, start , mid ) ;                 // sort the 1st part of array .
           merge_sort (A,mid+1 , end ) ;              // sort the 2nd part of array.
 //cout<<endl<<++l<<endl;
         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );   
       }                    
}

int main()
{int A[]={6,4,3,2,7,9};
 merge_sort ( A , 0, 5); 
 int i=0;
 while(i<6)
  {cout<<A[i]<<" ";i++;}
return 0;
}
