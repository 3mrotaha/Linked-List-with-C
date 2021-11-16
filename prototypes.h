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
	 float data;
	 struct node* next;
 };
 
 /****************************************************************** 
  * Addfirst : This function is used to add element to be the      *
  *			  first element in the Linked List.                    *
  ******************************************************************/
 void Addfirst(float value);
 
 /******************************************************************
  * Deletefirst : This function is used to Delete the first        *
  *				element in the Linked List.                        *
  ******************************************************************/
 void Deletefirst(void);

 /****************************************************************** 
  * AddLast : This function is used to add element to be the       *
  *			 last element in the Linked List.                      *
  ******************************************************************/
 void AddLast(float value);
 
 /******************************************************************
  * DeleteLast : This function is used to Delete the last          *
  *				element in the Linked List.                        *
  ******************************************************************/
 void DeleteLast(void);
 
 /******************************************************************
  * AddBefore : This function is used to Add an element before     *
  *				an existed element in the Linked List.             *
  ******************************************************************/
 void AddBefore(float Element, float value);
 
 /******************************************************************
  * DeleteElement : This function is used to Delete any            *
  *			 	element in the Linked List.                        *
  ******************************************************************/
 void DeleteElement(float Element);
 
 /******************************************************************
  * DisplayList : This function is used to Display the elements    *
  *				Added to the Linked List.                          *
  ******************************************************************/
 void DisplayList(void);
 
 
 