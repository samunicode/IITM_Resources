#include <stdio.h>
int searchElement(int arr2D[4][4], int n, int x)
{
   int i = 0, j = n-1;
   while ( i < n && j >= 0 )
   {
      if ( arr2D[i][j] == x )
      {
         printf("\nThe element Found at the position in the matrix is:  %d, %d", i, j);
         return 1;
      }
      if ( arr2D[i][j] < x )
        j--;
      else 
        i++;
   }
   printf("\nThe given element not found in the 2D array.");
   return 0;  
}
 
int main()
{
  int arr2D[4][4] = { {15, 23, 31, 39},
                    {18, 26, 36, 43},
                    {25, 28, 37, 48},
                    {30, 34, 39, 50},
                  };
int i,j,v;                  
v=37;
 //------------- print original array ------------------	
	printf("The given array in matrix form is :  \n");
	for(i = 0; i < 4; i++)
	{
	for (j=0;j<4;j++)
	{
	printf("%d  ", arr2D[i][j]);
    } 
	printf("\n");
	}
//------------------------------------------------------ 
  printf("The given value for searching is: %d",v);
  searchElement(arr2D, 4, v);
  return 0;
}
