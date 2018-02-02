
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])

{
      int m= atoi(argv[1]);
     int c = atoi(argv[2]);
     int n = atoi(argv[3]);
     time_t seed = atoi(argv[4]); 
   int k;
  float a1,a2;
  srand(time(&seed));  // to get a diff. random numbers when given seed

int A[n];

switch(c)   // selecting the case(best/avg/worst) for a sorting tech_
{
case 1 :
        if(m==3)    // for quick sort
                {
	                A[k]=rand();
	        }
	
        else if(m<2)   // for the rest two sorting tech_
        {       for(k=0;k<n;k++)
                {
	                A[k]=k;
	        }
	}
        break;
case 2 :
        for(k=0;k<n;k++)
        {
	        A[k]=rand();
	}
        break;
case 3 :
        for(k=0;k<n;k++)
        {
	        A[k]=n-k;
	}
	break;
default :
        cout<<"unexpected error\n";
        break;
}


switch (m)   // selecting case for sorting technique
{
case 1 :

        a1=clock();
        insert_sort(A,0,n-1);
        a2=clock();
        break;
case 2 :

        a1=clock();
        select_sort(A,0,n-1);
        a2=clock();
        break;
case 3 :

        a1=clock();
        quick_sort(A,0,n-1);
        a2=clock();break;
default :
        cout<<"unexpected error\n";
        break;
}
cout<<(double)(a2-a1)/(CLOCKS_PER_SEC)<<endl;

}

