#include<stdio.h>
void main()
{
int n,i,a[10],key,pos=0,ch;

printf("Enter your choice:");	
for(;;)
{
	printf("\n1.Linear search\n2.Binary search");
	scanf("%d",&ch);
    switch(ch)
    {
case 1:
{
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
printf("\nElement %d is found at %dth position\n",key, pos);
} 
else
{
printf("Element not found\n");
}
break; 
}
case 2:
{
	printf("Enter the no. of elements in the array\n"); 
scanf("%d",&n);
printf("Enter the array elements\n"); 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
} 
printf("Enter the element to be searched in a array\n"); 
scanf("%d",&key);
pos = binary(a, n, key); 
if(pos) 
{
printf("\n%d is found at %dth position\n",key, pos);
} 
else
{
printf("\nelement is not found");
} 
}
}
}
}

int binary(int a[], int n, int key) 
{
int first, last, mid; 
first = 0;
last = n-1; 
mid = (first + last)/2; 
while(first <= last)
{
if(key < a[mid])
{
last = mid-1;   
} 
else if(key == a[mid])
{
return mid+1;
} 
else
{
first = mid+1;
} 
mid = (first + last)/2;
} 
if(first > last)
{
return 0; 
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
