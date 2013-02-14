/*
 * LinkedList.c
 *
 *  Created on: Feb 14, 2013
 *      Author: anas
 */

#include "LinkedList.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Linked_List *head = NULL;
struct Linked_List *curr = NULL;

struct Linked_List* Create_List(int p_val)
{
	printf("\n creating list with headnode as [%d]\n",p_val);

	struct Linked_List *ptr = (struct Linked_List*)malloc(sizeof(struct Linked_List));
	if(ptr == NULL)
	{
		printf("\n Node creation failed \n");
		return NULL;
	}
	ptr->m_value = p_val;
	ptr->m_next = NULL;

	head = curr = ptr;
	return ptr;
}

struct Linked_List* Insert(int p_val, bool p_toEnd)
{
	if(NULL == head)
	{
		return (Create_List(p_val));
	}

	if(p_toEnd)
		printf("\n Adding node to end of list with value [%d]\n",p_val);
	else
		printf("\n Adding node to beginning of list with value [%d]\n",p_val);

	struct Linked_List *ptr = (struct Linked_List*)malloc(sizeof(struct Linked_List));
	if(ptr == NULL)
	{
		printf("\n Node creation failed \n");
		return NULL;
	}
	ptr->m_value = p_val;
	ptr->m_next = NULL;

	if(p_toEnd)
	{
		curr->m_next = ptr;
		curr = ptr;
	}
	else
	{
		ptr->m_next = head;
		head = ptr;
	}
	return ptr;
}


struct Linked_List* Search(int p_val, struct Linked_List **p_prev)
{
	struct Linked_List *ptr = head;
	struct Linked_List *temp = NULL;
	bool found = false;

	printf("\n Searching the list for value [%d] \n",p_val);

	while(ptr != NULL)
	{
		if(ptr->m_value == p_val)
		{
			found = true;
			break;
		}
		else
		{
			temp = ptr;
			ptr = ptr->m_next;
		}
	}

	if(true == found)
	{
		if(p_prev)
			*p_prev = temp;
		return ptr;
	}
	else
	{
		return NULL;
	}
}

int Delete(int p_val)
{
	struct Linked_List *prev = NULL;
	struct Linked_List *del = NULL;

	printf("\n Deleting value [%d] from list\n",p_val);

	del = Search(p_val,&prev);
	if(del == NULL)
	{
		return -1;
	}
	else
	{
		if(prev != NULL)
			prev->m_next = del->m_next;

		if(del == curr)
		{
			curr = prev;
		}
		else if(del == head)
		{
			head = del->m_next;
		}
	}

	free(del);
	del = NULL;

	return 0;
}

void Print_List(void)
{
    struct Linked_List *ptr = head;

    printf("\n -------Printing list Start------- \n");
    while(ptr != NULL)
    {
        printf("\n [%d] \n",ptr->m_value);
        ptr = ptr->m_next;
    }
    printf("\n -------Printing list End------- \n");

    return;
}

