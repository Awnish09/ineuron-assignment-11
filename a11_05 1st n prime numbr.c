/*function to print first n prime number*/

#include<stdio.h>
#include<conio.h>

void fstnpn(int);
int main()
{
    int n;
    printf("Enter a numbers.\n");
    scanf("%d",&n);
    fstnpn(n);

    getch();
    return 0;
}

void fstnpn(int y)
{
    int i, j=0, k, x;

    for(x=2; ; x++)
    {
        for(i=2, k=2; i<=x; i++)
        {
            if(x%i==0)
                break;
            else
                k+=1;
        }
        if(k==x)
        {
            printf("%d ",x);
            j+=1;
        }
        if(j==y)
            break;

    }

}
