#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"




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





 List_removeHead_CMockExpectAndReturn(32, &list, &college1);

 Stack_push_CMockExpect(33, &stack, &college1);

 List_removeHead_CMockExpectAndReturn(34, &list, &college2);

 Stack_push_CMockExpect(35, &stack, &college2);

 List_removeHead_CMockExpectAndReturn(36, &list, ((void *)0));



 Stack_pop_CMockExpectAndReturn(38, &stack, &college2);

 List_addTail_CMockExpect(39, &reverseList, &college2);

 Stack_pop_CMockExpectAndReturn(40, &stack, &college1);

 List_addTail_CMockExpect(41, &reverseList, &college1);

 Stack_pop_CMockExpectAndReturn(42, &stack, ((void *)0));





 InstitutionNumber = Institution_reverse(&list,&reverseList);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((InstitutionNumber)), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);



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





 List_removeHead_CMockExpectAndReturn(66, &list, &college1);

 Stack_push_CMockExpect(67, &stack, &college1);

 List_removeHead_CMockExpectAndReturn(68, &list, &college2);

 Stack_push_CMockExpect(69, &stack, &college2);

 List_removeHead_CMockExpectAndReturn(70, &list, &college3);

 Stack_push_CMockExpect(71, &stack, &college3);

 List_removeHead_CMockExpectAndReturn(72, &list, ((void *)0));



 Stack_pop_CMockExpectAndReturn(74, &stack, &college3);

 List_addTail_CMockExpect(75, &reverseList, &college3);

 Stack_pop_CMockExpectAndReturn(76, &stack, &college2);

 List_addTail_CMockExpect(77, &reverseList, &college2);

 Stack_pop_CMockExpectAndReturn(78, &stack, &college1);

 List_addTail_CMockExpect(79, &reverseList, &college1);

 Stack_pop_CMockExpectAndReturn(80, &stack, ((void *)0));





 InstitutionNumber = Institution_reverse(&list,&reverseList);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((InstitutionNumber)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);



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





 List_removeHead_CMockExpectAndReturn(105, &list, &college1);

 Stack_push_CMockExpect(106, &stack, &college1);

 List_removeHead_CMockExpectAndReturn(107, &list, &college2);

 Stack_push_CMockExpect(108, &stack, &college2);

 List_removeHead_CMockExpectAndReturn(109, &list, &college3);

 Stack_push_CMockExpect(110, &stack, &college3);

 List_removeHead_CMockExpectAndReturn(111, &list, &college4);

 Stack_push_CMockExpect(112, &stack, &college4);

 List_removeHead_CMockExpectAndReturn(113, &list, ((void *)0));



 Stack_pop_CMockExpectAndReturn(115, &stack, &college4);

 List_addTail_CMockExpect(116, &reverseList, &college4);

 Stack_pop_CMockExpectAndReturn(117, &stack, &college3);

 List_addTail_CMockExpect(118, &reverseList, &college3);

 Stack_pop_CMockExpectAndReturn(119, &stack, &college2);

 List_addTail_CMockExpect(120, &reverseList, &college2);

 Stack_pop_CMockExpectAndReturn(121, &stack, &college1);

 List_addTail_CMockExpect(122, &reverseList, &college1);

 Stack_pop_CMockExpectAndReturn(123, &stack, ((void *)0));





 InstitutionNumber = Institution_reverse(&list,&reverseList);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((InstitutionNumber)), (((void *)0)), (_U_UINT)127, UNITY_DISPLAY_STYLE_INT);



}
