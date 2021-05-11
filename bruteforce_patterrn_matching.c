#include<stdio.h>
#include<string.h>
char t[100],p[50];

void main()
{
     int pos;
     printf("Enter the Source String:\n ");
     scanf("%s",t);
     printf("Enter the pattern:\n ");
     scanf("%s",p);
     pos=brute_force();
     if(pos==-1)
           printf("\n%s Pattern not found in text",p);
      else
           printf("\n%s Pattern found at index %d",p,pos);
      getch();
}

int brute_force()
{
       int n,j,m,i;
       n=strlen(t);
       m=strlen(p);
       for(i=0;i<n;i++)
      {
             j=0;
             while(j<m && t[i+j]==p[j])
            {
                     j++;
                    if(j==m)
                            return i+1;  
            }
      }
      return -1; 
}
