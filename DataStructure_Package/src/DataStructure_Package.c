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


int main(void)
{
	const int MaxSize = 1000;
	PriorityQueue queue = Initialize(MaxSize);
	int i, j;

	Insert(20,queue);
	Insert(24,queue);
	Insert(50,queue);
	Insert(30,queue);
	Insert(23,queue);
	Insert(45,queue);

	printf("Min Number %d\n", FindMin(queue));
	DeleteMin(queue);
	printf("Min Number %d\n", FindMin(queue));
	DeleteMin(queue);
	printf("Min Number %d\n", FindMin(queue));
	DeleteMin(queue);
	printf("Min Number %d\n", FindMin(queue));


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
