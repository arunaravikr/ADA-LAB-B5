#include<stdio.h>
void main()
{
    int a[10],n;
	int i,j,pos,small,temp;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);
    printf("\nEnter the elements of an array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++) 
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<=n-1;j++){
            if(a[j]<small){
                small=a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
    printf("\nThe elements after selection sort are : ");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
}
