#include <stdio.h>
#include <stdlib.h>

struct s
{
    int sum,sub, mul,remind;
    float div, avr;
};

void calc(int x, int y, struct s* ptr);

int main()
{
    int fnum,snum;

    printf("Please enter the numbers\n");

    scanf("%d%d", &fnum,&snum);

    struct s A ;

    calc(fnum, snum, &A);

    printf("%d\n", A.sum);

    printf("%d\n", A.sub);

    printf("%d\n", A.mul);

    printf("%d\n", A.remind);

    printf("%f\n", A.div);

    printf("%f\n", A.avr);

    return 0;
}

void calc(int x, int y, struct s* ptr)
{

    (*ptr).sum = x+y;

    (*ptr).sub = x-y;

    (*ptr).mul = x*y;

    (*ptr).remind = x%y;

    ptr->div = (float) x/y;

    ptr->avr = ((float) x+y)/2;


}
