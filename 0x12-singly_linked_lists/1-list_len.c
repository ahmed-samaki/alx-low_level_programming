#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* list_len - check the code for ALX School students.
* @head: name of the list
* Return: the number of nodes.
*/
size_t list_len(const list_t *head)
{
   int counter = 0;


   while (head)
   {
       counter++;
       head = head->next;
   }
   return (counter);
}
