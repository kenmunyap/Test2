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





 List_removeHead_CMockExpectAndReturn(26, &list, &college1);

 Stack_push_CMockExpect(27, &stack, &college1);

 List_removeHead_CMockExpectAndReturn(28, &list, &college2);

 Stack_push_CMockExpect(29, &stack, &college2);

 List_removeHead_CMockExpectAndReturn(30, &list, ((void *)0));



 Stack_pop_CMockExpectAndReturn(32, &stack, &college2);

 List_addTail_CMockExpect(33, &reverseList, &college2);

 Stack_pop_CMockExpectAndReturn(34, &stack, &college1);

 List_addTail_CMockExpect(35, &reverseList, &college1);

 Stack_pop_CMockExpectAndReturn(36, &stack, ((void *)0));





 InstitutionNumber = Institution_reverse(&list,&reverseList);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((InstitutionNumber)), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);



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





 List_removeHead_CMockExpectAndReturn(60, &list, &college1);

 Stack_push_CMockExpect(61, &stack, &college1);

 List_removeHead_CMockExpectAndReturn(62, &list, &college2);

 Stack_push_CMockExpect(63, &stack, &college2);

 List_removeHead_CMockExpectAndReturn(64, &list, &college3);

 Stack_push_CMockExpect(65, &stack, &college3);

 List_removeHead_CMockExpectAndReturn(66, &list, ((void *)0));



 Stack_pop_CMockExpectAndReturn(68, &stack, &college3);

 List_addTail_CMockExpect(69, &reverseList, &college3);

 Stack_pop_CMockExpectAndReturn(70, &stack, &college2);

 List_addTail_CMockExpect(71, &reverseList, &college2);

 Stack_pop_CMockExpectAndReturn(72, &stack, &college1);

 List_addTail_CMockExpect(73, &reverseList, &college1);

 Stack_pop_CMockExpectAndReturn(74, &stack, ((void *)0));





 InstitutionNumber = Institution_reverse(&list,&reverseList);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((InstitutionNumber)), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_INT);



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





 List_removeHead_CMockExpectAndReturn(99, &list, &college1);

 Stack_push_CMockExpect(100, &stack, &college1);

 List_removeHead_CMockExpectAndReturn(101, &list, &college2);

 Stack_push_CMockExpect(102, &stack, &college2);

 List_removeHead_CMockExpectAndReturn(103, &list, &college3);

 Stack_push_CMockExpect(104, &stack, &college3);

 List_removeHead_CMockExpectAndReturn(105, &list, &college4);

 Stack_push_CMockExpect(106, &stack, &college4);

 List_removeHead_CMockExpectAndReturn(107, &list, ((void *)0));



 Stack_pop_CMockExpectAndReturn(109, &stack, &college4);

 List_addTail_CMockExpect(110, &reverseList, &college4);

 Stack_pop_CMockExpectAndReturn(111, &stack, &college3);

 List_addTail_CMockExpect(112, &reverseList, &college3);

 Stack_pop_CMockExpectAndReturn(113, &stack, &college2);

 List_addTail_CMockExpect(114, &reverseList, &college2);

 Stack_pop_CMockExpectAndReturn(115, &stack, &college1);

 List_addTail_CMockExpect(116, &reverseList, &college1);

 Stack_pop_CMockExpectAndReturn(117, &stack, ((void *)0));





 InstitutionNumber = Institution_reverse(&list,&reverseList);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((InstitutionNumber)), (((void *)0)), (_U_UINT)121, UNITY_DISPLAY_STYLE_INT);



}





void test_Institution_select_for_two_institution(){



  Institution dataInstitution1;

  Institution dataInstitution2;





  LinkedList beforeList;

  LinkedList afterList;



  dataInstitution1.type = University;

  dataInstitution2.type = College;





  InstitutionType type = College;



  List_removeHead_CMockExpectAndReturn(141, &beforeList, &dataInstitution1);

  List_removeHead_CMockExpectAndReturn(142, &beforeList, &dataInstitution2);

  List_addTail_CMockExpect(143, &afterList, &dataInstitution2);

  List_removeHead_CMockExpectAndReturn(144, &beforeList, ((void *)0));



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



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((data1)), (((void *)0)), (_U_UINT)164, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((data2)), (((void *)0)), (_U_UINT)165, UNITY_DISPLAY_STYLE_INT);



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



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((data1)), (((void *)0)), (_U_UINT)183, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((data2)), (((void *)0)), (_U_UINT)184, UNITY_DISPLAY_STYLE_INT);

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



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((data1)), (((void *)0)), (_U_UINT)201, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((data2)), (((void *)0)), (_U_UINT)202, UNITY_DISPLAY_STYLE_INT);

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



  List_removeHead_CMockExpectAndReturn(221, &beforeList, &dataInstitution1);

  List_removeHead_CMockExpectAndReturn(222, &beforeList, &dataInstitution2);

  List_addTail_CMockExpect(223, &afterList, &dataInstitution2);

  List_removeHead_CMockExpectAndReturn(224, &beforeList, &dataInstitution3);

  List_removeHead_CMockExpectAndReturn(225, &beforeList, ((void *)0));



  Institution_select(&beforeList, &afterList, &type, isUniversityCollege);





}









void test_wasEstablishedBefore_1980_2011(){

 int overEstablished;

 int checkYearEstablish;

 Institution institute[] = {{.type = Unknown, .yearEstablished = 1000}};







 InstitutionType year = 1900;





 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  checkYearEstablish = wasEstablishedBefore(&institute[0],&year);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((checkYearEstablish)), (((void *)0)), (_U_UINT)247, UNITY_DISPLAY_STYLE_INT);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { overEstablished = CExceptionFrames[MY_ID].Exception; overEstablished=overEstablished; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  printf("The Year has been overEstablished");

 }

}
