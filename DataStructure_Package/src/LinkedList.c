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


struct Node
{
	DataType	m_value;
	Position 	m_next;
};

List LL_MakeEmpty(List p_list)
{
	if(p_list == NULL)
		LL_Destroy(p_list);
	p_list = malloc(sizeof(struct Node));
	if(p_list == NULL)
		printf("Error!! Out Of Memory");
	p_list->m_next = NULL;
	return p_list;
}

int LL_IsEmpty(List p_list)
{
	return p_list->m_next == NULL;
}

/* Return true if P is the last position in list L */
/* Parameter L is unused in this implementation */
int LL_IsLast(Position p_pos, List p_list)
{
	return p_pos->m_next == NULL;
}

/* Return Position of X in L; NULL if not found */
Position LL_Find(DataType p_item, List p_list)
{
	Position p;
	p = p_list->m_next;
	while (p != NULL && p->m_value != p_item)
	{
		p = p->m_next;
	}
	return p;
}


void LL_Delete(DataType p_item, List p_list)
{
	Position p, tempNode;
	p = LL_FindPrevious(p_item, p_list);
	if(!LL_IsLast(p, p_list))
	{
		tempNode = p->m_next;
		p->m_next = tempNode->m_next;
		free(tempNode);
	}
}

Position LL_FindPrevious(DataType p_item, List p_list)
{
	Position pos;
	pos = p_list;
	while( pos->m_next != NULL && pos->m_next->m_value!= p_item)
	{
		pos = pos->m_next;
	}
	return pos;
}


void LL_Insert(DataType p_item, List p_list, Position p_pos)
{
	Position tempNode;
	tempNode = malloc(sizeof(struct Node));
	if(tempNode == NULL)
		printf("ERROR!! Out Of Space!!");
	tempNode->m_value = p_item;
	tempNode->m_next = p_pos->m_next;
}


void LL_Destroy(List p_list)
{
	Position pos, temp;
	pos->m_next = NULL;
	p_list->m_next = NULL;
	while(pos != NULL)
	{
		temp = pos->m_next;
		free(pos);
		pos = temp;
	}
}

Position LL_Head(List p_list)
{
	return p_list;
}

Position LL_First(List p_list)
{
	return p_list->m_next;
}
Position LL_Advance(Position p_pos)
{
	return p_pos->m_next;
}
DataType LL_Retrieve(Position p_pos)
{
	return p_pos->m_value;
}


