/*function for hcf*/

#include<stdio.h>
#include<conio.h>

int hcf(int, int);
int main()
{
    int a, b, h;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    h=hcf(a,b);
    printf("The H.C.F of %d and %d is %d",a,b,h);
    getch();
    return 0;
}

int hcf(int x, int y)
{
    int i, j, k=1;
    if(x<y)
        j=x;
    else
        j=y;
    for(i=2; i<=j; i++)
    {
        if(x%i==0 && y%i==0)
            k=i;

    }
    return k;
}
