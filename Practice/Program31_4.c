/*

31_4 -> write a program which return the second maximum element from singly linear linked list.

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); // 1

    newn->data = no; // 2
    newn->next = NULL;

    if (*Head == NULL) // 3
    {
        *Head = newn; // 4
    }
    else
    {
        newn->next = *Head; // 5
        *Head = newn;       // 6
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); // 1

    PNODE temp = *Head;

    newn->data = no; // 2
    newn->next = NULL;

    if (*Head == NULL) // 3
    {
        *Head = newn; // 4
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while (Head != NULL)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while (Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }
    return iCount;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL) // LL is empty
    {
        return;
    }
    else if ((*Head)->next == NULL) // LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else // LL contains more than one node
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL) // LL is empty
    {
        return;
    }
    else if ((*Head)->next == NULL) // LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else // LL contains more than one node
    {
        while (temp->next->next != NULL) // TYPE 3
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int no, int ipos)
{
    int iLength = 0;
    iLength = Count(*Head); // Calculate length of LL

    PNODE newn = NULL;
    int icnt = 0;
    PNODE temp = *Head;

    // Filter
    if ((ipos < 1) || (ipos > iLength + 1)) // Invalid position
    {
        printf("Invalid position\n");
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(Head, no);
    }
    else if (ipos == iLength + 1)
    {
        InsertLast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE)); // 1

        newn->data = no; // 2
        newn->next = NULL;

        for (icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp->next;
        }

        // Sequance is important
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int ipos)
{
    int iLength = 0;
    iLength = Count(*Head); // Calculate length of LL

    PNODE temp = *Head;
    PNODE tempX = NULL;

    int icnt = 0;

    // Filter
    if ((ipos < 1) || (ipos > iLength)) // Invalid position
    {
        printf("Invalid position\n");
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if (ipos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for (icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;

        // Sequance is important
        temp->next = temp->next->next;
        free(tempX);
    }
}

int SecMax(PNODE Head)
{
    int iCnt = 0;
    int iSecMax = 0;

    while (Head != NULL)
    {
        if ((Head->data) > iCnt)
        {
            iCnt = Head->data;
        }
        if (((Head->data) > iSecMax))
        {
            iCnt = iSecMax;
            iSecMax = Head->data;
        }

        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = SecMax(First);
    printf("Second maximum number is : %d", iRet);

    return 0;
}