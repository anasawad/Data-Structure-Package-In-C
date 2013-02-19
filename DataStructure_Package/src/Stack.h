/*
 * Stack.h
 *
 *  Created on: Feb 18, 2013
 *      Author: anas
 */

#ifndef STACK_H_
#define STACK_H_

typedef int DataType;


struct 				Node;
typedef struct Node *m_PtrToNode;
typedef m_PtrToNode Stack;


int ST_IsEmpty(Stack p_stack);
Stack ST_Create_Stack(void);
void ST_Dispose_Stack(Stack p_stack);
void ST_MakeEmpty(Stack p_stack);
void ST_Push(DataType p_item, Stack p_stack);
DataType ST_Top(Stack p_stack);
void ST_Pop(Stack p_stack);

#endif /* STACK_H_ */
