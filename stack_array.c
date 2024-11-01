#include <stdio.h>
#include <stdlib.h>
#define N 5
int stack[N];
int top = -1;
int i;


void push()
{
    if(top==N-1)
    {
        printf("Overflow\n");
        return;
        
    }
    else
    {
    int item;
    printf("\nEnter the element to insert\n");
    scanf("%d", &item);
    top++;
    stack[top] = item;
    }
}
void pop()
{
    if(top==-1)
    {
      printf("\nUnderflow, Stack empty\n");
      return;
    }
    else
    {
        int temp;
        temp = stack[top];
        top--;
        printf("\nPopped item is : %d\n",temp);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("\nUnderflow, Stack empty\n");
        return;
    }
    else
    {
        printf("\nTop most element is : %d ", stack[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("\nUnderflow, Stack empty\n");
        return;
    }
    else
    {
        printf("\nElements of the stack are : \n");
        for(i=top;i>=0;i--)
        {
            printf("%d  ",stack[i]);
        }
        printf("\n");
    }
}

int main()
{
        int ch;

    do{
    printf("--------------------\n");
    printf("Enter your choice\n");
    printf("1.Insert\n2.Delete\n3.View Top element\n4.Display\n");
    printf("--------------------\n");
    scanf("%d", &ch);
    printf("--------------------");
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
        case 0:
        printf("Exiting the program\n");
        break;
        default:
        printf("Invalid Choice\n");
        
    }
    
}while(ch!=0);
return 0;

}







