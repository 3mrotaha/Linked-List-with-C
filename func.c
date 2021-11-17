/************************************************************************** 
 * Auther : Amr M. Taha                                                   *
 * Version : V2.0                                                         *
 * DATE : 17th nov 2021                                                   *
 * Description :  Linked List - functions                                 *
 **************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"


 /*************************************************************** 
  * Defining the Node Type                                      *
  ***************************************************************/
 struct node{
	 DataType data;
	 struct node* next;
 };
 
  /*************************************************************** 
   * Defining the Head of the List                               *
   ***************************************************************/
 struct node *head = NULL;
  /*************************************************************** 
   * Defining the Tail of the List                               *
   ***************************************************************/
 struct node *tail = NULL;

static void Detect_Error(const char *message){
	if(message != NULL){
		printf("Error : %s\n", message);
	}
}

 void Addfirst(DataType value){
	struct node *new_node;
	new_node = (struct node*) malloc(sizeof(*new_node));
	if(new_node != NULL){
		new_node->data = value;
		new_node->next = head;		
		head = new_node;
		if(tail == NULL){
			tail = head;
			tail->next = NULL;
		}
	}
	else{
		Detect_Error("Node wasn't created, malloc didn't work");
	}
	
 }
 
 void Deletefirst(void){
	 struct node *current;
	 if(head == NULL){
		Detect_Error("List Is Already Empty");
	 }
	 else{
		 current = head;
		 head = head->next;
		 current->next = NULL;
		 free(current);
	 }
 }

 void AddLast(DataType value){
	 struct node* new_node;
	 new_node = (struct node*) malloc(sizeof(*new_node));
	 if(new_node != NULL){
		 new_node->data = value;
		 if(tail != NULL){
			 tail->next = new_node;
			 tail = tail->next;
			 tail->next = NULL;
		 }
		 else{
			 tail = new_node;
			 head = tail;
			 tail->next = NULL;
		 }
	 }
	 else{
		Detect_Error("Node wasn't created, malloc didn't work");
	}
 }
 
 void DeleteLast(void){
	struct node *previous = NULL;
	struct node *current = head;
	
	if(head == NULL){
		Detect_Error("List Is Already Empty");
	}
	else{
		while(current != tail && tail != head){
			previous = current;
			current = current->next;
		}
		if(previous != NULL){
			tail = previous;
			tail->next = NULL;
			free(current);
		}
		else{
			free(current);
			tail = NULL;
			head = tail;
		}
	}
 }
 
 void AddBefore(DataType Element, DataType value){
	 struct node *new_node;
	 struct node *current = head;
	 struct node *previous = NULL;
	 
	 new_node = (struct node*) malloc(sizeof(*new_node));
	 if(new_node == NULL){
		Detect_Error("Node wasn't created, malloc didn't work");
	 }
	 else if(head == NULL){
		Detect_Error("ELEMENT CAN'T BE FOUND AS LIST IS ALREADY EMPTY");
	 }
	 else{
		 new_node->data = value;
		 
		 while(current->data != Element && current != tail){
			 previous = current;
			 current = current->next;
		 }
		 if(current == tail && current->data != Element){
			Detect_Error("ELEMENT IS NOT EXISTED IN THE LIST");
		}
		else{
			 if(head != NULL && tail != NULL){
				 if(previous == NULL){
					 previous = new_node;
					 previous->next = head;
					 head = previous;
				 }
				 else{
					 previous->next = new_node;
					 new_node->next = current;
				 }
			 }
		}
	 }		
 }
 
 
 void DeleteElement(DataType Element){
	 struct node *current = NULL;
	 struct node *previous = NULL;
	 if(head == NULL){
		Detect_Error("List Is Already Empty");
	 }
	 else{
		 current = head;
		 while(current->data != Element && current != tail){
			 previous = current;
			 current = current->next;
		 }
		 if(current == tail && current->data != Element){
			Detect_Error("ELEMENT IS NOT EXISTED IN THE LIST");
		}
		 else{
			 if(current != NULL && current != head && current != tail){
				 previous->next = current->next;
				 current->next = NULL;
				 free(current);
			 }
			 else if(current == head){
				 head = current->next;
				 current->next = NULL;
				 free(current);
			 }
			 else if(current == tail){
				 tail = previous;
				 previous->next = NULL;
				 free(current);
			 }
		 }
	 }
 }
 
 void AddByIndex(const int Index, DataType value){
	struct node *new_node;
	struct node *current = NULL;
	struct node *previous = NULL;
	int index_count = 0;
	new_node = (struct node*) malloc(sizeof(*new_node));
	if(new_node == NULL){
		Detect_Error("Node wasn't created, malloc didn't work");
	}
	else{
		new_node->data = value;
		if(head == NULL && Index == 0){
			head = new_node;
			tail = head;
			tail->next = NULL;
		}
		else if(head == NULL && Index > 0){
			Detect_Error("LIST IS EMPTY, PLEASE ENTER A 0 INDEX");
		}
		else{
			current = head;
			while(index_count != Index && current != tail){
				previous = current;
				current = current->next;
				++index_count;
			}
			if(index_count != Index){
				Detect_Error("THIS INDEX IS TOO BIG, PLEASE ENTER A SMALLER INDEX");
			}
			else{
				if(previous == NULL){
					previous = new_node;
					previous->next = head;
					head = previous;
				}
				else{
					previous->next = new_node;
					new_node->next = current;
				}
			}
		}
	}
 }
 
 void DisplayList(void){
	 struct node *point_to_node;
	 if(head == NULL){
		Detect_Error("List Is Empty");
	 }
	 for(point_to_node = head; point_to_node != NULL; point_to_node = point_to_node->next)
		 printf(DATA_PRINT_PLACEHOLDER, point_to_node->data);
 }
 
