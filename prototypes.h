/************************************************************************** 
 * Auther : Amr M. Taha                                                   *
 * Version : V2.0                                                         *
 * DATE : 17th nov 2021                                                   *
 * Description :  Linked List - prototypes                                *
 **************************************************************************/
 
 #ifndef PROTOTYPES_H
 #define PROTOTYPES_H
 
 /****************************************************************** 
  * To control the date being read by the user                     *
  ******************************************************************/
 #define DATA_READ_PLACEHOLDER	"%d" 
 
 /****************************************************************** 
  * To control the Display of data stored in the linked list       *
  ******************************************************************/
 #define DATA_PRINT_PLACEHOLDER	"%d "
 
 /****************************************************************** 
  * Type of the data going to be stored in the linked list         *
  ******************************************************************/
 typedef int DataType;
  
 /****************************************************************** 
  * Addfirst : This function is used to add element to be the      *
  *			  first element in the Linked List.                    *
  ******************************************************************/
 void Addfirst(DataType value);
 
 /******************************************************************
  * Deletefirst : This function is used to Delete the first        *
  *				element in the Linked List.                        *
  ******************************************************************/
 void Deletefirst(void);

 /****************************************************************** 
  * AddLast : This function is used to add element to be the       *
  *			 last element in the Linked List.                      *
  ******************************************************************/
 void AddLast(DataType value);
 
 /******************************************************************
  * DeleteLast : This function is used to Delete the last          *
  *				element in the Linked List.                        *
  ******************************************************************/
 void DeleteLast(void);
 
 /******************************************************************
  * AddBefore : This function is used to Add an element before     *
  *				an existed element in the Linked List.             *
  ******************************************************************/
 void AddBefore(DataType Element, DataType value);
 
 /******************************************************************
  * DeleteElement : This function is used to Delete any            *
  *			 	element in the Linked List.                        *
  ******************************************************************/
 void DeleteElement(DataType Element);
 
 /******************************************************************
  * AddByIndex : This function is used to Add an element before    *
  *				Corresponding Index in the Linked List.            *
  ******************************************************************/
 void AddByIndex(const int Index, DataType value);
 
 /******************************************************************
  * DisplayList : This function is used to Display the elements    *
  *				Added to the Linked List.                          *
  ******************************************************************/
 void DisplayList(void);
 
 #endif
 
 