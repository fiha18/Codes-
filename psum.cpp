#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <sys/time.h>
using namespace std;


int main() 
{   
    int n, i, j;
    double t1,t2;
    double final;
    int arr[10000];
    cout<<"Enter array size:- ";
    cin>>n;
    printf("Enter the size of the array:-\n");
    
    srand(time(NULL));

    //Randomly initialise the array of numbers.

    for (int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }

    for(int i=0; i<n; i++){
        cout<<" "<<arr[i]<<" ";
    }

    cout<<"\n";


    t1=omp_get_wtime();

    int total_psum=0;

    #pragma omp parallel //explicitly instructs the compiler to parallelize this block of code
    {
        int total_thr=0;

        #pragma omp for //instructs the compiler to distribute loop iterations
        for(int i = 0; i < n; i++)
            total_thr += arr[i];

        #pragma omp atomic //omp atomic directive allows access of a specific memory location atomically. It ensures that race conditions are avoided.
        total_psum += total_thr;
    }

    t2= omp_get_wtime();
    cout<<"The total sum is:-"<<" "<<total_psum;
    cout<<"\n";

    final=t2-t1;
    
    cout<<"Time taken for prefix-sum with thread is: "<<final;
}
