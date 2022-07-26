/*function to print prime numbers between two given numbers*/

#include<stdio.h>
#include<conio.h>

void pnbtgn(int, int);
int main()
{
    int num1, num2;
    printf("Enter the two numbers between which you want to print all the prime numbers.\n");
    scanf("%d %d",&num1, &num2);
    pnbtgn(num1, num2);

    getch();
    return 0;
}

void pnbtgn(int x, int y)
{
    int i, k;

    for(x; x<=y ; x++)
    {
        for(i=2, k=2; i<=x; i++)
        {
            if(x%i==0)
                break;
            else
                k+=1;
        }
        if(k==x)
            printf("%d ",x);

    }

}
