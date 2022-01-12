#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Num;
    printf("Please Enter Your Number = ");
    scanf("%f", &Num);
    if(Num>0)
    {
        printf("%.3f is A Positive Number",Num);
    }
    else
    {
        if(Num==0)
        {
            printf("You've Entered Zero(0)");
        }
        else
        {
            printf("%.3f is A Negative Number", Num);
        }
    }

    getch();
    return 0;
}
