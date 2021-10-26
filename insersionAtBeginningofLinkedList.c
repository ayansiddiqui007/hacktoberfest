//inserting a node at beginning
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
//struct Node *head; //global variable, can be accessed anywhere
struct Node *Insert(struct Node *head, int x)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (head != NULL)
        temp->next = head;
    head = temp;
    return head;
}
void Print(struct Node *head)
{
    struct Node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        /* code */
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct Node *head = NULL; //empty list
    printf("How many numbers: ");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the numbers \n");
        scanf("%d", &x);
        head = Insert(head, x);
        Print(head);
    }
}