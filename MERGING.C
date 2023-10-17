#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],b[10],c[10],m,n,i,j,k=0;
  clrscr();
  printf("\n Enter the size of the array:");
  scanf("%d",&m);
  printf("\n Enter the sorted elements of array:");
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the size 2nd array:");
  scanf("%d",&n);
  printf("\n Enter the sorted elements of array:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  i=j=0;
  while(i<m&&j<n)
  {
    if(a[i]<b[j])
    {
      c[k]=a[i];
      i++;
    }
    else
    {
      c[k]=b[j];
      j++;
    }
    k++;
  }
  if(i>=m)
  {
    while(j<n)
    {
      c[k]=b[j];
      j++;
      k++;
    }
  }
  if(j>=n)
  {
    while(i<m)
    {
      c[k]=a[i];
      i++;
      k++;
    }
  }
  printf("\n After Merging:\n");
  for(i=0;i<m+n;i++)
  {
    printf("\t %d",c[i]);
  }
  getch();
}