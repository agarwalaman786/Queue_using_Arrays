#include<stdio.h>
#include<conio.h>
struct Queue
{
  int front,rear;
  int array[5];
};

struct Queue q1;

/*Function to insert the elements into the Queue*/
void insertion(int data)
{
    if(q1.front==0 && q1.rear==4 || q1.front==(q1.rear+1))
    {
        printf("\nList is full\n");
        getchar();
        return;
    }
    if(q1.front==-1)
    {
        q1.front=0;
        q1.rear=0;
    }
    else if(q1.rear==4)
    {
        q1.rear=0;
    }
    else
    {
        q1.rear=(q1.rear+1);
    }
    q1.array[q1.rear]=data;
}

/*Function to delete the element from the Queue*/
void delete()
{
    int item;
    if(q1.front==-1)
    {
        printf("List is Empty\n");
        return;
    }
    item=q1.array[q1.front];
    if(q1.front==q1.rear)
    {
       q1.front=-1;
       q1.rear=-1;
    }
    else if(q1.front==4)
    {
        q1.front=0;
    }
    else
    {
        q1.front=q1.front+1;
    }
    printf("Deleted element is\n%d",item);
    getchar();
}

/*Function to display all the elements of the Queue*/
void display()
{
    int i;
    if(q1.front<q1.rear)
    {
    for(i=q1.front;i<=q1.rear;i++)
    {
        printf("%d ",q1.array[i]);
    }
    }
    else
    {
    for(i=q1.front;i<5;i++)
    {
        printf("%d ",q1.array[i]);
    } 
    for(i=0;i<=q1.rear;i++)
    {
        printf("%d ",q1.array[i]);
    }
    }
}

/*choice Function to choose your desired Function*/
void choice()
{
    int choice,data;
    while(1)
    {
        clrscr();
        printf("1.Insertion\n2.Deletion\n3.display\n4.exit\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the data\n");
            scanf("%d",&data);
            insertion(data);
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Wrong choice\n");
        }
    }
}

/*Main Function to implement all the choices*/
int main()
{
    choice();
}


