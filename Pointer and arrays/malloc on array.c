//1D array with malloc and calloc and explanation on dynamic block
#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("PLease enter the size of the array");
   int n;
   scanf("%d", &n);//reading of array size_t

   int *p = (int*) malloc(n*sizeof(int));//int *p; p = (int*) malloc(n*sizeof(int))
   printf("\nData in the dynamic block\n");
   for(int i = 0; i < n; i++)
      {
         printf("%d\t", p[i]);
      }
   printf("\nPlease enter %d elements:\n", n);
   for(int i = 0; i < n; i++)
   {
      scanf("%d", &p[i]);//a[i] = &p[i]
   }

      printf("\nArray through malloc:\n");
      for(int i = 0; i < n; i++)
      {
         printf("%d\t", p[i]);
      }

    free(p);

   /*reutilizing p*/p = (int*) calloc(n, sizeof(int));//int *p; p = (int*) malloc(n, sizeof(int))
   printf("\nData in the dynamic block\n");
   for(int i = 0; i < n; i++)
      {
         printf("%d\t", p[i]);
      }
   printf("\nPlease enter %d elements:\n", n);
   for(int i = 0; i < n; i++)
   {
      scanf("%d", &p[i]);//a[i] = &p[i]
   }

      printf("\nArray through calloc:\n");
      for(int i = 0; i < n; i++)
      {
         printf("%d\t", p[i]);
      }
    free(p);
}
