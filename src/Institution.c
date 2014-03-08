#include <stdio.h>
#include "Institution.h"
#include "CException.h"
#include "LinkedList.h"
#include "Stack.h"




int Institution_reverse(LinkedList *inputList, LinkedList *outputList){

		Institution *dataElement;
		
		
		// if the head is 0 mean no element to push 		
		if(inputList->head == NULL){
			return 0;
		}
		
		
		for(dataElement = List_removeHead(inputList); dataElement != NULL; dataElement = List_removeHead(inputList)){
			Stack_push(&stack,dataElement);
		}
		
		for(dataElement = Stack_pop(&stack); dataElement !=NULL ; dataElement = Stack_pop(&stack)){
			List_addTail(outputList,dataElement);
		}
		
		return 1;
}

//void Stack_push(Stack *stack, void *element);
//void *Stack_pop(Stack *stack);
//void List_addTail(LinkedList *list, void *element);
//void *List_removeHead(LinkedList *list);










