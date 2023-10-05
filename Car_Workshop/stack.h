/*
 * File:   stack.h
 * Author: Ziad Elmekawy
 *
 * Created on 02 October, 2023, 11:20 ?
 */

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

/************ Section : includes ************/
#include <stdio.h>
#include <stdlib.h>
#include "general.h"
/************ Section : Macro Declarations ***************/

/************* Section : Macro Function Declarations *************/

/************* Section : Data Type Declarations *************/


/************* Section : Function Declarations *************/
void Create_Stack (Customer_t *my_Stack);
void push (char *Name , int ID , int year_model , Customer_t *my_Stack);
void pop (Customer_t *my_Stac) ;

#endif // STACK_H_INCLUDED
