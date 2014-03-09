#include <stdio.h>
#include "Institution.h"
#include "CException.h"
#include "LinkedList.h"
#include "Stack.h"




int Institution_reverse(LinkedList *inputList, LinkedList *outputList){
		int counter= 0;
		Institution *dataElement;
	
		if(inputList->head == NULL){
			return 0;
		}
		
		
		for(dataElement = List_removeHead(inputList); dataElement != NULL; dataElement = List_removeHead(inputList)){
			Stack_push(&stack,dataElement);
			counter++;
		}
		
		for(dataElement = Stack_pop(&stack); dataElement !=NULL ; dataElement = Stack_pop(&stack)){
			List_addTail(outputList,dataElement);
			
		}
		return counter;
}




int Institution_select(LinkedList *inputList, LinkedList *outputList, void *criterion, int (*compare)(void*,void*)){

		Institution *dataElement;
		int counter;
	
		if(inputList->head == NULL){
			return 0;
		}
		
		dataElement = List_removeHead(inputList);
		for(dataElement = List_removeHead(inputList); dataElement !=NULL; dataElement = List_removeHead(inputList)){
			if(compare(dataElement,criterion)){
					List_addTail(outputList,dataElement);
					counter++;
			}
		}
		return counter;


}
	

int isUniversityCollege(void *elem1,void *type){
		
		InstitutionType *typeOfInstitution;	
		Institution *dataElement;
		
		typeOfInstitution = type;
		dataElement = elem1;
		
		if(dataElement->type == *typeOfInstitution){	
			return 1;
		}
		else{
			return 0;
		}
}

int wasEstablishedBefore(void *elem1,void *year){

		
		Institution *dataElement;
		int overYearofEstablish;
		int *InstitutionYear = year;
		dataElement = elem1;
		
		if(dataElement->yearEstablished >2014){
			Throw(overYearofEstablish);
		}
		
		if(dataElement->yearEstablished == *InstitutionYear){	
			return 1;
		}
		else{
			return 0;
		}

}



