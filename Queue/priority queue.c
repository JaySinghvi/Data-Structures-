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
        { //find the appropriate position
                int i,j;
                for(i=Front;i<=Rear;i++)
                {
                    if(Q[i]>ele)
                        break; // found the location
                }
            //shifting the elements
            for(j=Rear; j>=i; j--)
                Q[j+1]=Q[j];

            Q[i]=ele;
             Rear++;
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
void display()
{
    if(IsEmpty()){printf("Queue Underflow"); return NULL;}
    int i;
    for (i=Front; i<=Rear; i++)
        printf("\t%d",Q[i]);
}

int main()
{
    Insert(20);
    Insert(40);
    Insert(30);
    Insert(10);
    Insert(50);
    Insert(60);
    printf("\n The QUEUE is : ");
    display();
    printf("\nDeleted element= %d",Delete());
    printf("\nDeleted element= %d",Delete());
    printf("\nDeleted element= %d",Delete());
    printf("\n The QUEUE after three deletion : ");
    display();
}
