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

int main(void)
{
	int i = 0, ret = 0;
	    struct Linked_List *ptr = NULL;

	    Print_List();

	    for(i = 5; i<10; i++)
	        Insert(i,true);

	    Print_List();

	    for(i = 4; i>0; i--)
	        Insert(i,false);

	    Print_List();

	    for(i = 1; i<10; i += 4)
	    {
	        ptr = Search(i, NULL);
	        if(NULL == ptr)
	        {
	            printf("\n Search [val = %d] failed, no such element found\n",i);
	        }
	        else
	        {
	            printf("\n Search passed [val = %d]\n",ptr->m_value);
	        }

	        Print_List();

	        ret = Delete(i);
	        if(ret != 0)
	        {
	            printf("\n delete [val = %d] failed, no such element found\n",i);
	        }
	        else
	        {
	            printf("\n delete [val = %d]  passed \n",i);
	        }

	        Print_List();
	    }

    return 0;
}
