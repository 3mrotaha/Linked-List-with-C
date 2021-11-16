/************************************************************************** 
 * Auther : Amr Mohamed Taha Ibrahem                                      *
 * Version : V1                                                           *
 * DATE : 14th nov 2021                                                   *
 * Description :  Linked List - functions                                 *
 **************************************************************************/
 #include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"

 struct node *head = NULL;
 struct node *tail = NULL;

 void Addfirst(float value){
	struct node *new_node;
	new_node = (struct node*) malloc(sizeof(*new_node));
	if(new_node != NULL){
		new_node->data = value;
		new_node->next = head;		
		head = new_node;
		if(tail == NULL){
			tail = head;
		}
	}
	
 }
 
 void Deletefirst(void){
	 struct node *current;
	 current = head;
	 head = head->next;
	 current->next = NULL;
	 free(current);
 }

 void AddLast(float value){
	 struct node* new_node;
	 new_node = (struct node*) malloc(sizeof(*new_node));
	 if(new_node != NULL){
		 new_node->data = value;
		 new_node->next = NULL;
		 if(tail != NULL){
			 tail->next = new_node;
			 tail = tail->next;
		 }
		 else{
			 tail = new_node;
			 if(head == NULL) head = tail;
		 }
	 }
 }
 
 void DeleteLast(void){
	struct node *previous = NULL;
	struct node *current = head;
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
 
 void AddBefore(float Element, float value){
	 struct node *new_node;
	 struct node *current = head;
	 struct node *previous = NULL;
	 
	 new_node = (struct node*) malloc(sizeof(*new_node));
	 new_node->data = value;
	 
	 while(current->data != Element && current != NULL){
		 previous = current;
		 current = current->next;
	 }
	 if(head != NULL && tail != NULL){
		 if(previous == NULL){
			 previous = new_node;
			 new_node->next = head;
		 }
		 else{
			 previous->next = NULL;
			 previous->next = new_node;
			 new_node->next = current;
		 }
	 } 
 }
 
 
 void DeleteElement(float Element){
	 struct node *current = head;
	 struct node *previous = NULL;
	  
	 while(current->data != Element && current != NULL){
		 previous = current;
		 current = current->next;
	 }
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
 
 void DisplayList(void){
	 struct node *point_to_node;
	 for(point_to_node = head; point_to_node != NULL; point_to_node = point_to_node->next)
		 printf("%.3f ", point_to_node->data);
 }
 
