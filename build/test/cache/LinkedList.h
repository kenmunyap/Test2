#include "Stack.h"






typedef struct LinkedList{

 void *head;

 void *tail;

}LinkedList;



void List_addTail(LinkedList *list, void *element);

void *List_removeHead(LinkedList *list);
