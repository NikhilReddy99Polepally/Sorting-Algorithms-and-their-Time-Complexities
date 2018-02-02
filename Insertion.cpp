#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using namespace std;

int insert_sort(int A[],int low,int high)  // Insertion sort alg.
{
      int i,k,j;
    for(i=low;i<high+1;i++)
    {	   k=A[i];
	for(j=i-1;j>=low;j--)
	{	if(A[j]>k)
		{
		       A[j+1]=A[j];
		}
		else
		{
		        break;
		}
	}	
        A[j+1]=k;
    }
}

