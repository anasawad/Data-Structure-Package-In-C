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
#include "Stack.h"


int main(void)
{

	Stack s;

	int i;
	s = ST_Create_Stack();
	for(i=0; i < 10; i++)
		ST_Push(i,s);

	while(!ST_IsEmpty(s))
	{
		printf("%d\n", ST_Top(s));
		ST_Pop(s);
	}

	return 0;
}
