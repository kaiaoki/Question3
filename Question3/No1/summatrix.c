//summatrix.c
#include<stdio.h>
#include "matrix.h"

typedef struct _matrix 
{
    int m11;
    int m21;
} matrix; //definition

int summatrix(matrix j,matrix k)
{
    int l;
    l=j+k;

    return l;

}