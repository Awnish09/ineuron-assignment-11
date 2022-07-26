/*function to check whether number is prime or not*/

#include<stdio.h>
#include<conio.h>

int ponot(int);
int main()
{
    int a, b;
    printf("Enter a numbers.\n");
    scanf("%d",&a);
    b=ponot(a);
    if(b==1)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);

    getch();
    return 0;
}

int ponot(int x)
{
    int i, k=2;

    for(i=2; i<=x; i++)
    {
        if(x%i==0)
            break;
        else
            k+=1;

    }
    if(k==x)
        return 1;
    else
        return 0;
}
