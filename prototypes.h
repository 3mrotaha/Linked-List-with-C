/************************************************************************** 
 * Auther : Amr Mohamed Taha Ibrahem                                      *
 * Version : V1                                                           *
 * DATE : 14th nov 2021                                                   *
 * Description :  Linked List - prototypes                                *
 **************************************************************************/
 
 
 /*************************************************************** 
  * Defining the Node Type                                      *
  ***************************************************************/
 struct node{
	 int data;
	 struct node* next;
 };
 
 /****************************************************************** 
  * Addfirst : This function is used to add element to be the      *
  *			  first element in the Linked List.                    *
  ******************************************************************/
 void Addfirst(int value);
 
 /******************************************************************
  * Deletefirst : This function is used to Delete the first        *
  *				element in the Linked List.                        *
  ******************************************************************/
 void Deletefirst();

 /****************************************************************** 
  * AddLast : This function is used to add element to be the       *
  *			 last element in the Linked List.                      *
  ******************************************************************/
 void AddLast(int value);
 
 /******************************************************************
  * DeleteLast : This function is used to Delete the last          *
  *				element in the Linked List.                        *
  ******************************************************************/
 void DeleteLast();
 
 /******************************************************************
  * AddBefore : This function is used to Add an element before     *
  *				an existed element in the Linked List.             *
  ******************************************************************/
 void AddBefore(int Element, int value);
 
 /******************************************************************
  * DeleteElement : This function is used to Delete any            *
  *			 	element in the Linked List.                        *
  ******************************************************************/
 void DeleteElement(int Element);
 
 /******************************************************************
  * DisplayList : This function is used to Display the elements    *
  *				Added to the Linked List.                          *
  ******************************************************************/
 void DisplayList();
 
 
 