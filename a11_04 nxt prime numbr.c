/*function to find next prime number of a given number*/

#include<stdio.h>
#include<conio.h>

int nxtpn(int);
int main()
{
    int a, b;
    printf("Enter a numbers.\n");
    scanf("%d",&a);
    b=nxtpn(a);
    printf("The next prime number is %d",b);

    getch();
    return 0;
}

int nxtpn(int y)
{
    int i, k, x;
    x=y+1;

    for(x; ; x++)
    {
        for(i=2, k=2; i<=x; i++)
        {
            if(x%i==0)
                break;
            else
                k+=1;
        }
        if(k==x)
            break;

    }
    return x;

}
