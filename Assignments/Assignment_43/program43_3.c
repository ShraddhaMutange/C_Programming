/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : InsertLast
//  Description :   It inserts elements in last position
//  Input :         PPNODE, Int
//  Output :        void
//  Author :        Shraddha Dhananjay Mutange
//  Date :          15/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*first == NULL) // LL is empty
    {
        *first = newn;
    }
    else // LL contains atleast one node
    {
        temp = *first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
} // End of InsertLast

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Display
//  Description :   It displays all elements
//  Input :         PPNODE
//  Output :        void
//  Author :        Shraddha Dhananjay Mutange
//  Date :          15/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
} // End of Display

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : EvenAddition
//  Description :   It return addition of all even elements from SLL
//  Input :         PPNODE
//  Output :        Int
//  Author :        Shraddha Dhananjay Mutange
//  Date :          15/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int EvenAddition(PNODE first)
{
    int iSum = 0;

    while (first != NULL)
    {
        if(first->data % 2 == 0)
        {
            iSum = iSum + first->data;
        }
        first = first->next;
    }

    return iSum;
} // End of EvenAddition

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertLast(&head, 10);
    InsertLast(&head, 20);
    InsertLast(&head, 33);
    InsertLast(&head, 40);

    Display(head);

    iRet = EvenAddition(head);
    printf("Addition of even numbers is : %d\n", iRet);
    

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Input   :   | 10 |->| 20 |->| 33 |->| 40 |->NULL
//  Output  :   70
//
/////////////////////////////////////////////////////////////////////////////////////////////////