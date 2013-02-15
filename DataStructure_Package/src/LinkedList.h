/*
 * LinkedList.h
 *
 *  Created on: Feb 14, 2013
 *      Author: anas
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



typedef int DataType;

struct Node;
typedef struct Node *m_ptrToNode;
typedef m_ptrToNode List;
typedef m_ptrToNode Position;

List LL_MakeEmpty(List p_list );
int LL_IsEmpty(List p_list);
int LL_IsLast(Position p_pos, List p_list);
Position LL_Find(DataType p_item, List p_list);
void LL_Delete(DataType p_item, List p_list);
Position LL_FindPrevious(DataType p_item, List p_list);
void LL_Insert(DataType p_item, List p_list, Position p_pos);
void LL_Destroy(List p_list);
List LL_Reverse(List p_list); // by Ahmed Hani
Position LL_Header(List p_list);
Position LL_First(List p_list);
Position LL_Advance(Position p_pos);
DataType LL_Retrieve(Position p_pos);


#endif /* LINKEDLIST_H_ */
