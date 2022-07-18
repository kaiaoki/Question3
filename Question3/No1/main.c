#include<stdio.h>
#include"matrix.h"

int main()
{

matrix x;
x.m11=5;
x.m21=7;

matrix y;
y.m11=2;
y.m21=3;
//dainyuu

matrix a;
a.m11=summatrix(x.m11,y.m11);
a.m21=summatrix(x.m21,y.m21);

printf("%d \n %d",a.m11,a.m21);

}


