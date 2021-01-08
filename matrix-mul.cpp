#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

using namespace std;
const int size = 1000;

float first_mat[size][size];
float second_mat[size][size];
float final_mat[size][size];

int main()
{
    int i,j,k;
    double t1, t2, final;
    int row1, colm1, row2, colm2;

    cout<<"Enter the row and column of first matrix:-";
    cin>>row1>>colm1;
    cout<<"Enter the row and column of second matrix:-";
    cin>>row2>>colm2;

    srand(time(NULL));
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < colm2; ++j) {
            first_mat[i][j] = rand()%100;
            second_mat[i][j] = rand()%1000;
            final_mat[i][j] = 0.0f;
        }
    }

    t1=omp_get_wtime();

    #pragma omp parallel private(i,j,k) shared(first_mat,second_mat,final_mat) //to parallelise the loop
    #pragma omp for // instructs the compiler to distribute loop iterations within the team of threads
    for ( i = 0; i < row1; ++i) {
        for ( j = 0; j < colm2; ++j) {
            for (k = 0; k < colm1; ++k) {
                final_mat[i][j] += first_mat[i][k] * second_mat[k][j];
            }
        }
    }

    t2= omp_get_wtime();

    cout<<"Matrix multiplication sucessful"<<"\n";
    cout<<"Resultant matrix is:-"<<"\n";
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < colm2; ++j) {
            cout<<" "<<final_mat[i][j]<<" ";
        }
        cout<<"\n";
    }



    final=t2-t1;
    cout<<"Total time taken is: "<<final;

    return 0;
}