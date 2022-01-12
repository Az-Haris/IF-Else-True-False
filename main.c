#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Num;
    printf("Please Enter Your Number = ");
    scanf("%f",&Num);
    if(Num>0)
    {
        printf("%.3f is Positive Number", Num);
    }
    else
    {
        printf("%.3f is Negative Number", Num);
    }
    return 0;
    getch();
}
