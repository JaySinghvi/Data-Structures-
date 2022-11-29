#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("PLease enter the size of the array");
   int n;
   scanf("%d", &n);//reading of array size_t

   int *p = (int*) malloc(n*sizeof(int));//int *p; p = (int*) malloc(n*sizeof(int))

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

    //here can also give: scanf("%d", &m) to let user decide hom much more value to add
    p = (int*) realloc(p, (n+3/*n+m if scanf statement written above*/)*sizeof(int));
    printf("\n enter 3 new elements:\n");
    for(int i = n; i < n+3; i++)
    {
        scanf("%d", &p[i]);//'&'is needed to print the values
    }
    printf("\nArray through realloc:\n");
      for(int i = 0; i < n+3; i++)
      {
         printf("%d\t", p[i]);
      }

    free(p);

}
