/*
 * File:   Main.c
 * Author: Ziad Elmekawy
 *
 * Created on 02 October, 2023, 11:20 ?
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

Customer_t customer1 ;
Customer_t customer2 ;
Customer_t customer3 ;
Customer_t customer4 ;


int main()
{
    Create_Stack(&customer1);
    int Number_of_serve;
    printf("****************** Welcome to Our Car Workshop *******************\n\n");
    printf("1. Add a New Customer.\n2. Serve a Customer.\n3. How many Customers are waiting \n4. Display Customers Information. \n5. Display Customers information in a “most-recent” Order. \n6. Exit \n");
    printf("\nPlease insert the number of your serve : ");
    scanf("%i",&Number_of_serve);
    switch(Number_of_serve)
    {
        case 1:
            printf("Add a New Customer \n");
            break;
        case 2:
            printf("Serve a Customer   \n");
            break;
        case 3:
            printf("How many Customers are waiting \n");
            break;
        case 4:
            printf("Display Customers Information \n");
            break;
        case 5:
            printf("Display Customers information in a “most-recent” Order. \n");
            break;
        case 6:
            printf("Exit \n");
            break;
        default:
            printf("Error !!!!!!!! Please Enter a valid Number \n");
    }
    return 0;
}
