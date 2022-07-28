/*program in C to find the sum of the series.*/

#include<stdio.h>
#include<conio.h>

int sumofsrz();
int main()
{
    //int num;
    int l;
    //printf("Enter a number.\n");
    //scanf("%d",&num);
    //l=sumofsrz(num);
    l=sumofsrz();
    printf("The sum of the series is %d.",l);
    getch();
    return 0;
}

int factorial(int);
//int sumofsrz(int x)
int sumofsrz()
{
    int i, a=0;
    for(i=1; i<=5; i++)
        a+=factorial(i)/i;
    return a;
}

int factorial(int x)
{
    int i, s=1;
    for(i=1; i<=x; i++)
        s*=i;
    return s;
}
