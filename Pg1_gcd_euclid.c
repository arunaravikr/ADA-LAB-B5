#include <stdio.h>
 
int gcd(int x,int y)
{
    if (y==0) {
        return x;
    } else if (x>=y && y>0) {
        return gcd(y,(x%y));
    }
}
 
void main()
{
    int num1,num2,gcde;
    printf("\nEnter two numbers to find gcd :\n ");
    scanf("%d%d",&num1,&num2);
    gcde = gcd(num1,num2); 
    if (gcde)
        printf("\nThe GCD of %d and %d is %d\n", num1, num2, gcde);
    else
        printf("\nInvalid input!!!\n");
}
