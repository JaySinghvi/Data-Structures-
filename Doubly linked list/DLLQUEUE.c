//Q through SLL
#include<stdio.h>

 struct NODE { int data;
               struct NODE *next, *pre; };
typedef struct NODE node;

node *front=NULL;
    node *rear=NULL;
void insert(int ele)
     {
         node *temp = ( node *) malloc( sizeof(node));
                if(temp==NULL)
                {
                    printf("\nMemory allocation fails");
                    return;
                }

                temp->data=ele;
                temp->next=NULL;
                temp->pre=NULL;
        if(rear==NULL) //if it's a first node
            {
                front=temp;
                rear=temp;
                temp->pre=front;
                //temp=NULL; taken care by the system , if we write it's good practice but not required
                return;
            }

         rear->next=temp;
         temp->pre=rear;
         rear=temp;
         //temp=NULL;
      }

void delete()
  {   if(front==NULL)
      {
          printf("\nEmpty Queue");
          return;
      }
      if(front==rear)// if only one node
      {   printf("\n Dequeued element:   %d",front->data);
          front->pre=NULL;//remember this whole part
          free(front);
          front=NULL;
          rear=NULL;
          return;
      }
      node *temp;
       printf("\n Dequeued element:   %d",front->data);
      temp=front;
      front=front->next;
      front->pre=NULL;
      temp->next=NULL;
      temp->pre=NULL;
      free(temp);
      //temp=NULL;
  }



void display(){
                if(front==NULL)
                {
                    printf("\nEmpty Queue");
                    return;
                }

                node *temp=front;
                while(temp!=rear)
                    {
                        printf("%d\t",temp->data);
                        temp=temp->next;
                    }
                 printf("%d",temp->data);
    }




int main()
{

    int x, selection;
    char ans;
        do
            { printf("\n 1. Enqueue \t 2. Dequeue \t 3. Display");
              printf("\nSelect operation\t");
              scanf("%d",&selection);
              switch(selection)
              {
                case 1:
                   printf("\nEnter the element to be queued  : ");
                   scanf("%d",&x);
                   insert(x);
                   break;
                case 2:
                    delete();
                    break;
                case 3:
                    display();

              }

              printf("\nDo you want to continue? Y/N\t");
              scanf(" %c",&ans);// leave a space between " and %c otherwise it will not work
            } while(ans=='Y' || ans=='y');

}
