#include "Binary_Heap.h"
#include <stdlib.h>
#include <stdio.h>

#define MINSIZE (10);
#define MINDATA (-1000);


PriorityQueue PQ_Initialize(int p_maxElements)
{
	PriorityQueue queue;

	if(p_maxElements < 10)   //MINSIZE
		printf("ERROR!! Queue size is very small");

	queue = malloc(sizeof( struct BinaryHeap));

	if(queue == NULL)
	printf("ERROR!! Queue Is NULL!!");

	/*+1 for sentinel val*/
	queue->m_Array = malloc((p_maxElements+1)* sizeof(DataType));

	if(queue->m_Array == NULL)
		printf("ERROR!! Queue Is NULL");

	queue->m_Capacity = p_maxElements;
	queue->m_Size = 0;
	queue->m_Array[0] = MINDATA;
	return queue;
}

void PQ_Insert(DataType p_item, PriorityQueue p_queue)
{
	/*
		 * Steps:
		 * 1- Add node to the tree
		 * 2- Create a hole in the next available location
		 * 3- Violate the heap order by sliding the element that's in the hole's parent node into the node
		 * 4- bubbling the whole up towar the root, continue untill item can be placed in the hole.
		 * */

	int i;
	if(PQ_IsFull(p_queue))
	{
		printf("ERROR!! Queue is Full");
		return;
	}
	for(i=++p_queue->m_Size; p_queue->m_Array[i/2] > p_item; i /= 2)
		p_queue->m_Array[i] = p_queue->m_Array[i/2];
	p_queue->m_Array[i] = p_item;
}

DataType PQ_DeleteMin(PriorityQueue p_queue)
{
	int i, child;
	DataType minEle, lastEle;

	if(PQ_IsEmpty(p_queue))
	{
		printf("ERROR!! Queue is Empty");
		return p_queue->m_Array[0];
	}
	minEle = p_queue->m_Array[1];
	lastEle = p_queue->m_Array[p_queue->m_Size--];

	for(i=1; i*2 < p_queue->m_Size; i = child)
	{
		child = i*2;
		// get the smaller child;
		if (child != p_queue->m_Size && p_queue->m_Array[child+1] < p_queue->m_Array[child])
			child++;
		//percolate one level
		if(lastEle > p_queue->m_Array[child])
			p_queue->m_Array[i] = p_queue->m_Array[child];
		else
			break;
	}
	p_queue->m_Array[i] = lastEle;
	return minEle;
}

DataType PQ_FindMin(PriorityQueue p_queue)
{
	if(!PQ_IsEmpty(p_queue))
		return p_queue->m_Array[1];
	printf("ERRoR!! Queue is Empty!!");
	return p_queue->m_Array[0];
}

void PQ_Make_Empty( PriorityQueue p_queue)
{
	p_queue->m_Size = 0;
}

int PQ_IsEmpty(PriorityQueue p_queue)
{
	return (p_queue->m_Size == 0);
}

int PQ_IsFull(PriorityQueue p_queue)
{
	return (p_queue->m_Size == p_queue->m_Capacity);
}

void PQ_Destroy(PriorityQueue p_queue)
{
	free(p_queue->m_Array);
	free(p_queue);
}
