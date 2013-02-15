
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
void Destroy(PriorityQueue p_queue);
void Make_Empty( PriorityQueue p_queue);
void Insert(DataType p_item, PriorityQueue p_queue);
DataType DeleteMin(PriorityQueue p_queue);
DataType FindMin(PriorityQueue p_queue);
int IsEmpty(PriorityQueue p_queue);
int IsFull(PriorityQueue p_queue);

#endif

/* END */
