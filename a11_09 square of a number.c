/*function to calculate the square of a number*/

#include<stdio.h>
#include<conio.h>

int square(int);
int main()
{
    int n, s;
    printf("Enter a numbers.\n");
    scanf("%d",&n);
    s=square(n);
    printf("The square of %d is %d.",n,s);

    getch();
    return 0;
}

int square(int y)
{
    int i;
    i=y*y;
    return i;
}
