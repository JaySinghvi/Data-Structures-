// Stack through DLL
#include<stdio.h>

 struct NODE { int data;
               struct NODE *next,*pre; };
typedef struct NODE node;
node *top=NULL;

void push(int ele)
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
                if (top==NULL)
                    {
                        top=temp;
                        temp->pre=top;
                    }
                else
                    {
                        temp->next=top;
                        top->pre=temp;
                        top=temp;
                        temp->pre=NULL;

                    }
             // temp=NULL; will be done automatically
      }



void pop()
  {   if(top==NULL)
      {
          printf("\nEmpty Stack");
          return;
      }
      printf("\nPopped elemnt :  %d",top->data);
      node *cur;
      cur=top;
      if(top->next==NULL)// only single node in the DLL
      {
          top->pre=NULL;
          top=NULL;
          free(cur);
      }
      else
      {

      top=cur->next;
      top->pre=NULL;
      cur->next  =NULL;
      cur->pre=NULL;
      free(cur);
      }

  }



int main()
{

    int x, selection;
    char ans;
        do
            { printf("\n 1. PUSH \t 2. POP");
              printf("\nSelect operation\t");
              scanf("%d",&selection);
              switch(selection)
              {
                case 1:
                   printf("\nEnter the element to be pushed  : ");
                   scanf("%d",&x);
                   push(x);
                   break;
                case 2:

                    pop();

              }

              printf("\nDo you want to continue? Y/N\t");
              scanf(" %c",&ans);// leave a space between " and %c otherwise it will not work
            } while(ans=='Y' || ans=='y');

}
