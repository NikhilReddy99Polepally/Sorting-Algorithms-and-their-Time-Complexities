#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using namespace std;

int swap1(int A[],int i,int j)  // func. for swaping the num
{     int k;
     k=A[i];
    A[i]=A[j];
     A[j]=k;
 return 0;
}

int min(int A[],int low ,int high)
{
    int k=low,i;
for(i=low+1;i<high+1;i++)
{
	if(A[k]>A[i])
	{	
		k=i;
		
	}
}
return k;
}

int select_sort(int A[],int low,int high)  // selection sort
{
if(low<high)
    {
	int i;
	i=min(A,low,high);
	swap1(A,i,low);
	select_sort(A,low+1,high);
     }
}
