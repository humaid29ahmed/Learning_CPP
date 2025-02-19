#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct Rectangle
{
    int l;
    int b;
};

int main()
{
    //pointers are mostly used when we want access some memory from the heap memory
    // Allocating memory in heap in C language

    int *p;
    p = (int*)malloc(5*sizeof(int));
    p[0] = 56;
    p[1] = 78;
    p[2] = 99;
    p[3] = 52;
    p[4] = 36;
    for(int x = 0; x<5; x++)
    {
        printf("%d\n",*p );
        p++;
    }
   
    
    //C++ way of allocating arary in heap
    int *a;
    a= new int[5];
    a[0]=89;
    a[1]=56;
    a[2]=89;
    a[3]=63;
    a[4]=83;

    for(int x = 0; x<5; x++)
    {
    printf("%d\n", a[x]);
    }

    delete [] a;// C++ way of freeing the array memory for one variable occupying memory can be deleted like this "delete p;"
    // free(p);//freeing the memory in C language

    int *m;
    char *c;
    float *f;
    double *d;
    struct Rectangle *r;

    printf("size of int pointer %d\n", sizeof(m));
    printf("size of char pointer %d\n", sizeof(c));
    printf("size of float pointer %d\n", sizeof(f));
    printf("size of double pointer %d\n", sizeof(d));
    printf("size of struct pointer %d\n", sizeof(r));

    return 0;

}