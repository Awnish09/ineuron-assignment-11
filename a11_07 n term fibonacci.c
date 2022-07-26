/*function to print n term of Fibonacci series*/

#include<stdio.h>
#include<conio.h>

void nterfs(int);
int main()
{
    int n;
    printf("Enter a numbers.\n");
    scanf("%d",&n);
    nterfs(n);

    getch();
    return 0;
}

void nterfs(int y)
{
    int i=-1, j=1, x, a;

    for(x=1; x<=y ; x++)
    {
        a=i+j;
        i=j;
        j=a;
        printf("%d ",a);
    }

}
