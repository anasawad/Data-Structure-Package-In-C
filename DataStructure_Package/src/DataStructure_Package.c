/*
 ============================================================================
 Name        : DataStructure_Package.c
 Author      : Anas A. Ismail
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "LinkedList.h"
#include "Binary_Heap.h"

void PrintList( const List L )
{
    Position P = LL_Head( L );

    if( LL_IsEmpty( L ) )
        printf( "Empty list\n" );
    else
    {
        do
        {
            P = LL_Advance( P );
            printf( "%d ", LL_Retrieve( P ) );
        } while( !LL_IsLast( P, L ) );
        printf( "\n" );
    }
}


int main(void)
{

	List list ;
	Position pos;

	int i ;
	list = LL_MakeEmpty(NULL);
	pos = (Position)LL_Head(list);

	PrintList(list);

	//list = LL_MakeEmpty(NULL);
	LL_Insert( 1, list, pos );
	pos = LL_Advance(pos);
	LL_Insert( 2, list, pos );
	pos = LL_Advance(pos);
	LL_Insert( 3, list, pos );
	pos = LL_Advance(pos);
	LL_Insert( 4, list, pos );
	PrintList(list);


	list = LL_Reverse(list);
	PrintList(list);

//	for( i = 0; i < 10; i++ )
//	{
//		LL_Insert( i, list, pos );
//		PrintList( list );
//		pos = LL_Advance( pos );
//	}
//	PrintList(list);

//	const int MaxSize = 1000;
//	PriorityQueue queue = PQ_Initialize(MaxSize);
//	int i, j;
//
//	PQ_Insert(20,queue);
//	PQ_Insert(24,queue);
//	PQ_Insert(50,queue);
//	PQ_Insert(30,queue);
//	PQ_Insert(23,queue);
//	PQ_Insert(45,queue);
//
//	printf("Min Number %d\n", PQ_FindMin(queue));
//	PQ_DeleteMin(queue);
//	printf("Min Number %d\n", PQ_FindMin(queue));
//	PQ_DeleteMin(queue);
//	printf("Min Number %d\n", PQ_FindMin(queue));
//	PQ_DeleteMin(queue);
//	printf("Min Number %d\n", PQ_FindMin(queue));


	//	for( i=0, j=MaxSize/2; i<MaxSize; i++, j=( j+71)%MaxSize )
	//		Insert( j, queue);
	//	j = 0;
	//	while( !IsEmpty(queue))
	//		if( DeleteMin(queue) != j++ )
	//			printf( "Error in DeleteMin, %d\n", j );
	//	printf( "Done...\n" );
	//	int i = 0, ret = 0;
	//	    struct Linked_List *ptr = NULL;
	//
	//	    Print_List();
	//
	//	    for(i = 5; i<10; i++)
	//	        Insert(i,true);
	//
	//	    Print_List();
	//
	//	    for(i = 4; i>0; i--)
	//	        Insert(i,false);
	//
	//	    Print_List();
	//
	//	    for(i = 1; i<10; i += 4)
	//	    {
	//	        ptr = Search(i, NULL);
	//	        if(NULL == ptr)
	//	        {
	//	            printf("\n Search [val = %d] failed, no such element found\n",i);
	//	        }
	//	        else
	//	        {
	//	            printf("\n Search passed [val = %d]\n",ptr->m_value);
	//	        }
	//
	//	        Print_List();
	//
	//	        ret = Delete(i);
	//	        if(ret != 0)
	//	        {
	//	            printf("\n delete [val = %d] failed, no such element found\n",i);
	//	        }
	//	        else
	//	        {
	//	            printf("\n delete [val = %d]  passed \n",i);
	//	        }
	//
	//	        Print_List();
	//	    }

	return 0;
}
