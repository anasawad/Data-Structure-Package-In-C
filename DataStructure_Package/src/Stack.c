/*
 * Stack.c
 *
 *  Created on: Feb 18, 2013
 *      Author: anas
 */

#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>


struct Node{
	DataType m_data;
	m_PtrToNode m_next;
};

int ST_IsEmpty(Stack p_stack)
{
	return p_stack->m_next == NULL;
}

Stack ST_Create_Stack(void)
{
	Stack stack;
	stack = malloc(sizeof(struct Node));
	if(stack == NULL)
		printf("ERROR!!Out Of Space!!");
	ST_MakeEmpty(stack);
	return stack;

}


void ST_MakeEmpty(Stack p_stack)
{
	if(p_stack == NULL)
		printf("ERROR!! Create Stack First!!");
	else
		while(!ST_IsEmpty(p_stack))
			ST_Pop(p_stack);

}

void ST_Push(DataType p_item, Stack p_stack)
{
	m_PtrToNode newNode;
	newNode = malloc(sizeof(struct Node));
	if(newNode == NULL)
	printf("ERROR!! Out of memory!!");
	else
	{
		newNode->m_data = p_item;
		newNode->m_next = p_stack->m_next;
		p_stack->m_next = newNode;
	}
}

void ST_Dispose_Stack(Stack p_stack)
{
	ST_MakeEmpty(p_stack);
	free(p_stack);
}

DataType ST_Top(Stack p_stack)
{
	if(!ST_IsEmpty(p_stack))
		return p_stack->m_next->m_data;
	//else
	printf("ERROR!! Stack Is Empty!!");
	return 0;
}


void ST_Pop(Stack p_stack)
{
	m_PtrToNode firstNode;
	if(ST_IsEmpty(p_stack))
		printf("ERROR!! Stack Is Empty!!");
	else
	{
		firstNode = p_stack->m_next;
		p_stack->m_next = p_stack->m_next->m_next;
		free(firstNode);
	}
}
