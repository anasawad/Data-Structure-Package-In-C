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

struct Linked_List
{
	int 			    m_value;
	struct Linked_List *m_next;
};

struct Linked_List* Create_List(int p_val);
struct Linked_List* Insert_LinkedList(int p_val, bool p_toEnd);
struct Linked_List* Search(int p_val, struct Linked_List **p_prev);
int Delete(int p_val);
void Print_List(void);


#endif /* LINKEDLIST_H_ */
