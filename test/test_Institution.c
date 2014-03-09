#include "unity.h"
#include "Institution.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"
#include <stdio.h>

extern Stack stack;

void setUp(){}
void tearDown(){}

void test_Reverse_2_element_in_same_Linked_list(){
		
	 Institution college1;
	 Institution college2;
	
	 LinkedList list;
	 LinkedList reverseList;
	
	 list.head = &college1;
	 list.tail = &college2;
		
	 int InstitutionNumber;
	

	List_removeHead_ExpectAndReturn(&list,&college1);
	Stack_push_Expect(&stack,&college1);
	List_removeHead_ExpectAndReturn(&list,&college2);
	Stack_push_Expect(&stack,&college2);
	List_removeHead_ExpectAndReturn(&list,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&college2);
	List_addTail_Expect(&reverseList,&college2);
	Stack_pop_ExpectAndReturn(&stack,&college1);
	List_addTail_Expect(&reverseList,&college1);
	Stack_pop_ExpectAndReturn(&stack,NULL);
	
	
	InstitutionNumber = Institution_reverse(&list,&reverseList);
	TEST_ASSERT_EQUAL(2,InstitutionNumber);
		
}


void test_Reverse_3_element_in_same_Linked_list(){
		
	 Institution college1;
	 Institution college2;
	 Institution college3;
	 
	 LinkedList list;
	 LinkedList reverseList;
	
	 list.head = &college1;
	 list.tail = &college3;
		
	 int InstitutionNumber;
	

	List_removeHead_ExpectAndReturn(&list,&college1);
	Stack_push_Expect(&stack,&college1);
	List_removeHead_ExpectAndReturn(&list,&college2);
	Stack_push_Expect(&stack,&college2);
	List_removeHead_ExpectAndReturn(&list,&college3);
	Stack_push_Expect(&stack,&college3);
	List_removeHead_ExpectAndReturn(&list,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&college3);
	List_addTail_Expect(&reverseList,&college3);
	Stack_pop_ExpectAndReturn(&stack,&college2);
	List_addTail_Expect(&reverseList,&college2);
	Stack_pop_ExpectAndReturn(&stack,&college1);
	List_addTail_Expect(&reverseList,&college1);
	Stack_pop_ExpectAndReturn(&stack,NULL);
	
	
	InstitutionNumber = Institution_reverse(&list,&reverseList);
	TEST_ASSERT_EQUAL(3,InstitutionNumber);
		
}


void test_Reverse_4_element_in_same_Linked_list(){
		
	 Institution college1;
	 Institution college2;
	 Institution college3;
	 Institution college4;
	 
	 LinkedList list;
	 LinkedList reverseList;
	
	 list.head = &college1;
	 list.tail = &college4;
		
	 int InstitutionNumber;
	

	List_removeHead_ExpectAndReturn(&list,&college1);
	Stack_push_Expect(&stack,&college1);
	List_removeHead_ExpectAndReturn(&list,&college2);
	Stack_push_Expect(&stack,&college2);
	List_removeHead_ExpectAndReturn(&list,&college3);
	Stack_push_Expect(&stack,&college3);
	List_removeHead_ExpectAndReturn(&list,&college4);
	Stack_push_Expect(&stack,&college4);
	List_removeHead_ExpectAndReturn(&list,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&college4);
	List_addTail_Expect(&reverseList,&college4);
	Stack_pop_ExpectAndReturn(&stack,&college3);
	List_addTail_Expect(&reverseList,&college3);
	Stack_pop_ExpectAndReturn(&stack,&college2);
	List_addTail_Expect(&reverseList,&college2);
	Stack_pop_ExpectAndReturn(&stack,&college1);
	List_addTail_Expect(&reverseList,&college1);
	Stack_pop_ExpectAndReturn(&stack,NULL);
	
	
	InstitutionNumber = Institution_reverse(&list,&reverseList);
	TEST_ASSERT_EQUAL(4,InstitutionNumber);
		
}


void test_Institution_select_for_two_institution(){
	
	 Institution dataInstitution1;
	 Institution dataInstitution2;

	 
	 LinkedList beforeList;
	 LinkedList afterList;
	 
	 dataInstitution1.type = University;
	 dataInstitution2.type = College;

	 
	 InstitutionType type = College;
	 
	 List_removeHead_ExpectAndReturn(&beforeList,&dataInstitution1);
	 List_removeHead_ExpectAndReturn(&beforeList,&dataInstitution2);
	 List_addTail_Expect(&afterList,&dataInstitution2);
	 List_removeHead_ExpectAndReturn(&beforeList,NULL);
	
	 Institution_select(&beforeList, &afterList, &type, isUniversityCollege);
	 
	 
}

void test_UniversityCollege_2_is_not_same_element(){
	Institution dataInstitution1;
	Institution dataInstitution2;
	int data1;
	int data2;
	dataInstitution1.type = College;
	dataInstitution2.type = University;
	
	InstitutionType type = UniversityCollege;
	
	data1 = isUniversityCollege(&dataInstitution1,&type);
	data2 = isUniversityCollege(&dataInstitution2,&type); 
	
	TEST_ASSERT_EQUAL(0,data1);
	TEST_ASSERT_EQUAL(0,data2);

}

void test_UniversityCollege_1_is_not_same_element_1_is_same(){
	Institution dataInstitution1;
	Institution dataInstitution2;
	int data1;
	int data2;
	
	dataInstitution1.type = College;
	dataInstitution2.type = University;
	
	InstitutionType type = College;
	
	data1 = isUniversityCollege(&dataInstitution1,&type);
	data2 = isUniversityCollege(&dataInstitution2,&type); 
	
	TEST_ASSERT_EQUAL(1,data1);
	TEST_ASSERT_EQUAL(0,data2);
}

void test_UniversityCollege_2_is_same_element(){
	Institution dataInstitution1;
	Institution dataInstitution2;
	int data1;
	int data2;
	
	dataInstitution1.type = College;
	dataInstitution2.type = College;
	
	
	InstitutionType type = College;
	data1 = isUniversityCollege(&dataInstitution1,&type);
	data2 = isUniversityCollege(&dataInstitution2,&type); 
	
	TEST_ASSERT_EQUAL(1,data1);
	TEST_ASSERT_EQUAL(1,data2);
}


void test_Institution_select_for_three_institution(){

	 Institution dataInstitution1;
	 Institution dataInstitution2;
	 Institution dataInstitution3;
	 
	 LinkedList beforeList;
	 LinkedList afterList;
	 
	 dataInstitution1.type = University;
	 dataInstitution2.type = College;
	 dataInstitution3.type = UniversityCollege;
	 
	 InstitutionType type = College;
	 
	 List_removeHead_ExpectAndReturn(&beforeList,&dataInstitution1);
	 List_removeHead_ExpectAndReturn(&beforeList,&dataInstitution2);
	 List_addTail_Expect(&afterList,&dataInstitution2);
	 List_removeHead_ExpectAndReturn(&beforeList,&dataInstitution3);
	 List_removeHead_ExpectAndReturn(&beforeList,NULL);
	
	 Institution_select(&beforeList, &afterList, &type, isUniversityCollege);
	 
	 
}




void test_wasEstablishedBefore_1980_2011(){
	int overEstablished;
	int checkYearEstablish;
	Institution institute[] =  {{.type = Unknown, .yearEstablished = 1000}};
							
	
	
	InstitutionType year = 1900;

	
	Try{
		checkYearEstablish = wasEstablishedBefore(&institute[0],&year);
		TEST_ASSERT_EQUAL(0,checkYearEstablish);
	}
	Catch(overEstablished){
		printf("The Year has been overEstablished");
	}
}
























