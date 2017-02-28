#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int** getMatrix(int n, int m);
int** allocateMatrix(int n, int m);
int** addMatrices(int** A, int** B, int n, int m);
void printMatrix(int** A, int n, int m);
void deallocateMatrix(int** A, int n);


// This program reads in two n by m matrices A and B and
// prints their sum C = A + B
int main() {
    int n = 0, m = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    assert(n > 0 && m > 0);
    printf("Enter matrix A:\n");
    int** A = getMatrix(n, m);
    printf("Enter matrix B:\n");
    int** B = getMatrix(n, m);
    int** C = addMatrices(A, B, n, m);
    printf("A + B = \n");
    printMatrix(C, n, m);
    deallocateMatrix(A, n);
    deallocateMatrix(B, n);
    deallocateMatrix(C, n);
}

// Creates a new n by m matrix whose elements are read from stdin
int** getMatrix(int n, int m) {
    int** M = allocateMatrix(n, m);
    for (int i = 0; i < n; i++) {
        printf("Input row %d elements, separated by spaces: ", i);
        for (int j = 0; j < m; j++) {
            scanf("%d", &M[i][j]);
        }
    }
    return M;
}

// Allocates space for an n by m matrix of ints
// and returns the result
int** allocateMatrix(int n, int m) {
    int **matrix = (int **) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
	    matrix[i] = (int *) malloc(m * sizeof(int));
    }
    return matrix;
}

// Adds two matrices together and returns the result
int** addMatrices(int** A, int** B, int n, int m) {
    int **C = allocateMatrix(n, m);
    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
		    C[i][j] = A[i][j] + B[i][j];
	    }
    }
    return C;
}

// Prints out the entries of the matrix
void printMatrix(int** A, int n, int m) {
    int i = 0;
    while (i < n) {
	    for (int j = 0; j < m-1; j++) {
		    printf("%d ", A[i][j]);
	    }
	    printf("%d\n", A[i][m-1]);
	    ++i;
    }
}

// Deallocates space used by the matrix
void deallocateMatrix(int** A, int n) {
    for (int i = 0; i < n; i++) {
        free(A[i]);
    }
    free(A);
}
