
typedef int DataType;
typedef unsigned int uint;
#ifndef BINARY_HEAP_H

struct BinaryHeap
{
	uint m_Capacity;
	uint m_Size;
	DataType *m_Array;
};

struct BinaryHeap;
typedef struct BinaryHeap *PriorityQueue;

PriorityQueue Initialize(int p_maxElements);
void PQ_Destroy(PriorityQueue p_queue);
void PQ_Make_Empty( PriorityQueue p_queue);
void PQ_Insert(DataType p_item, PriorityQueue p_queue);
DataType PQ_DeleteMin(PriorityQueue p_queue);
DataType PQ_FindMin(PriorityQueue p_queue);
int PQ_IsEmpty(PriorityQueue p_queue);
int PQ_IsFull(PriorityQueue p_queue);

#endif

/* END */
