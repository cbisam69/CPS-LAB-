#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node*link;
}NODE;

NODE*getnode();
NODE*insert_front(int ele,NODE*last);
NODE*insert_rear(int ele,NODE*last);
NODE*del_front(NODE*last);
NODE*del_rear(NODE*last);
void display(NODE*last);

int main()
{
NODE*last=NULL;
int ch,ele;
for(;;)
{
printf("ENTER 1 TO INSERT FRONT\n2 TO INSERT Rear\n3 to delete front\n4 to delete rear\n5 to display\n6 to exit\n");
scanf("%d",&ch);

switch(ch)
{
case 1:printf("enter the element\n");
      scanf("%d",&ele);
      last=insert_front(ele,last);
      break;
case 2:printf("enter the element\n");
      scanf("%d",&ele);
      last=insert_rear(ele,last);      
      break;
case 3:last=del_front(last);
      break;
case 4:last=del_rear(last);
case 5:display(last);
case 6:exit(0);
}
      }
return 0;
}
NODE*getnode()
        {
        NODE*temp;
        temp=(NODE*)malloc(sizeof(NODE));
       
        if(temp=NULL)
        {
        return NULL;
        return temp;
        }
       }
       
       NODE*insert_front(int ele,NODE*last)
       {
        NODE*temp=getnode();
        temp->data=ele;
        if(last==NULL)
        {
        last=temp;
                }
                else
                {
                temp->link=last->link;
                }
                last->link=temp;
               
            return last;
       }
       
       NODE*insert_rear(int ele,NODE*last)
       {
        NODE*temp=getnode();
        temp->data=ele;
        if(last=NULL)
        {
        last=temp;
                }
                else
                {
                temp->link=last->link;
                }
                last->link=temp;
               
            return last;
       }
       
       NODE*del_front(NODE*last)
       {
      NODE*temp;
                 if(last==NULL)
                 {
                 printf("empty list\n");
                 
                 return NULL;
                 }
                 
                 if(last->link=last)
                 {
                  printf("the deleted element is %d",last->data);
                 
                  free(last);
                 
                  return NULL;
                }
               
                temp=temp->link;
                last->link=temp->link;
                printf("the deleted element is %d",temp->data);
                free(temp);
                return last;
        }
       
        NODE*del_rear(NODE*last)
        {
        NODE*present,*prev;
         if(last->link=last)
                 {
                  printf("the deleted element is %d",last->data);
                 
                  free(last);
                 
                  return NULL;
                }
                present=last->link;
                prev=NULL;
               
                while(present!=last)
                {
               
                prev=present;
                present=present->link;
                }
        prev->link=present->link;
               
               
                printf("deleted elemnt is %d",present->data);
                free(present);
               
                return prev;
         }
         
         void display(NODE*last)
         {
          NODE*temp;
          for(temp=last->link;temp!=last;temp=temp->link)
          {
          printf("%d",temp->data);
          }
          printf("%d",last->data);
          return;
         }
