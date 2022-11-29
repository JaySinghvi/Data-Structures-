
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
        if( (Rear+1)%n == Front)
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
            Rear = (Rear+1)%n;
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
        else if(Front==Rear)
            {
                x=Q[Front];
                Front=-1;
                Rear=-1;
                return x;
            }  //only one item was there

         x=Q[Front];
         Front = (Front+1)%n;
         return x;
    }

 void display()
    {
        int i;
        printf("\nElements in Q are: \n");
            for(i=Front; i!=Rear; i=(i+1)%n)
                printf("\n%d",Q[i]);
            printf("\n%d",Q[i]); // to print element at rear

    }

int main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    Insert(60);
    printf("\nDeleted element: %d",Delete());
    Insert(60);
    display();

}

