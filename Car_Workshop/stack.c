/*
 * File:   stack.c
 * Author: Ziad Elmekawy
 *
 * Created on 02 October, 2023, 11:20 ?
 */
#ifndef STACK_C
#define STACK_C

/************* Section : Includes ***************/
#include "stack.h"
#include <string.h>

/************* Section : Function Definitions ***************/
void Create_Stack (Customer_t *my_Stack)
{
    if(NULL != my_Stack)
    {
        my_Stack->stack_pointer = -1 ;  /** to intialize stack_pointer equal to -1 **/
    }
    else{/*Nothing*/}
}

void push (char *Name , int ID , int year_model , Customer_t *my_Stack)
{
    if(NULL != my_Stack)
    {
        my_Stack->stack_pointer++ ;
        my_Stack->ID = ID ;
        my_Stack->Model_year = year_model ;
        strcpy(Name , my_Stack->Name);
    }
    else{/*Nothing*/}
}

void pop (Customer_t *my_Stack )
{
    if(NULL != my_Stack)
    {
        printf ("Name       : %s \n",my_Stack->Name) ;
        printf ("ID         : %d \n",my_Stack->ID);
        printf ("Model_year : %d \n",my_Stack->Model_year);
        my_Stack->stack_pointer-- ;
    }
    else{/*Nothing*/}

}

void Stack_Size (Customer_t *my_Stack)
{
    if(my_Stack != NULL)
    {
        printf("Number of Customers : %d \n",(my_Stack->stack_pointer));
    }
    else
    { /*Nothing*/ }

}

#endif // STACK_C
