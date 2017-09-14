#include<stdio.h>


void swap(int *, int *);

 

void main()

{

    int x, y;

    printf("Enter 2 nos: \n");

    scanf("%d %d", &x, &y);

    printf("\nYou have entered x = %d y = %d \n", x, y);

    swap(&x,&y);    

}

 

void swap(int *a, int *b)

{

    *a = *a + *b;

    *b = *a - *b;

    *a = *a - *b;

    printf("Swapped . . . .\n"); 

    printf("x = %d y = %d\n", *a, *b);

}
