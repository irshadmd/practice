/*program to insert and delete an element from 1-D array*/
#include<stdio.h>
int main() 
{
   int a[30],element,n,i,location,position;
   printf("Enter no of elements :");
   scanf("%d",&n);
   printf("Enter the %d elements:\n",n);
   for(i=0;i<n;i++) 
   {
      scanf("%d",&a[i]);
   }
   printf("Enter the element to be inserted :");
   scanf("%d",&element);
   printf("Enter the location:");
   scanf("%d",&location);
   for(i=n;i>=location;i--) 
   {
      a[i+1]=a[i];
   }
   n++;
   a[location-1]=element;
   printf("New array is:\n");
   for(i=0;i<n;i++)
   {
	  	printf("%d\t", a[i]);
   }
   printf("\nEnter the location you wish to delete element:");
   scanf("%d",&position);
   for(i=position-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	printf("Resultant array is:");
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}
   return(0);
/*OUTPUT
Enter no of elements :6
Enter the 6 elements:
1
2
3
4
5
6
Enter the element to be inserted :0
Enter the location:1
New array is:
0       1       2       3       4       5       6
Enter the location you wish to delete element:7
Resultant array is:0    1       2       3       4       5
*/
}