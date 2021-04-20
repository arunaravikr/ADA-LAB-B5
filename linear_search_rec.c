#include<stdio.h>

int linear(int a[], int, int);

void main()
{
int n,i,a[10],key,pos=0;
printf("Enter the no. of elements in the array\n"); 
scanf("%d",&n);
printf("Enter the array elements\n"); 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
} 
printf("Enter the element to be searched in a array\n"); 
scanf("%d",&key);
pos = linear(a, n, key); 
if(pos != 0)
{
printf("Element %d is found at %dth position",key, pos);
} 
else
{
printf("Element not found\n");
} 
}

int linear(int a[],int n,int key)
{
if(n>=0)
{
if(a[n-1] == key)
{
return n;
}
else
{
return linear(a, n-1, key);
}
n--;
}
}
