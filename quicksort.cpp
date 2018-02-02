#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using namespace std;

int swap(int A[],int i,int j)  // func. for swaping the num
{     int k;
     k=A[i];
    A[i]=A[j];
     A[j]=k;
 return 0;
}



int partition(int A[],int low,int high) // reqiured for quick sort
{
    int k=A[high],i=low,j=low-1;
    for(i=low;i<high+1;i++)
   {
	if(A[i]<=k)
	{
		j++;
		swap(A,i,j);
	}
   }
return j;
}


int quick_sort(int A[],int low,int high) // Quick sort alg.
{  int p;
    if(low<high)
   {
      p=partition(A,low,high);
      quick_sort(A,low,p-1);
      quick_sort(A,p+1,high);
   }
}
