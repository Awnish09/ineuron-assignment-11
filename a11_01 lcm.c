#include<stdio.h>
#include<conio.h>

int lcm(int, int);
int main()
{
    int a, b, l;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    l=lcm(a,b);
    printf("The L.C.M of %d and %d is %d",a,b,l);
    getch();
    return 0;
}

int lcm(int x, int y)
{
    int i, j;

    for(i=2; i<=x*y; i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    return i;
}
