#include<stdio.h>
#define n 5
   int Q[n];
   int Front=-1;
   int Rear=-1;

    int IsEmpty()
    {
        if(Front==-1 && Rear==-1)
        return 1;
      return 0;
    }

    int IsFull()
    {
        if( Rear==n-1)
          return 1;
        return 0;
    }

    void Insert(int ele)
    {
        if (IsFull())
        {
            printf("Queue Overflow");
        }
        else if( IsEmpty())
        {
                Front=0;
                Rear=0;
                Q[Rear]=ele;
        }
        else
        {
            Rear++;
            Q[Rear]=ele;
        }
    }
    int Delete()
    {
        int x;
        if (IsEmpty())
            {
                printf("Queue Underflow");
                return NULL;
            }
        if(Front==Rear)
            {
                x=Q[Front];
                Front=-1;
                Rear=-1;
                return x;
            }  //only one item was there

         x=Q[Front];
         Front++;
         return x;
    }

int main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    Insert(60);
    printf("\n%d",Delete());
    printf("\n%d",Delete());
    printf("\n%d",Delete());
}

