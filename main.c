/************************************************************************** 
 * Auther : Amr Mohamed Taha Ibrahem                                      *
 * Version : V1                                                           *
 * DATE : 14th nov 2021                                                   *
 * Description :  Linked List - main                                      *
 **************************************************************************/
 #include <stdio.h>
#include "prototypes.h"

int main(){
	int data, command;
	printf("\ncommands : \n>> 1 to add first, 2 to delete first\n>> 3 to add last, 4 to delete last \n>> 5 to add before an existed element, 6 to delete any element\n>> 0 to exit :");
	while(1){
		printf("\nEnter a command : ");
		scanf("%d", &command);
		
		if(!command){break;}
		else if(command == 1){
			scanf("%d", &data);
			Addfirst(data);
			DisplayList();
		}
		else if(command == 2){
			Deletefirst();
			DisplayList();
		}
		else if(command == 3){
			scanf("%d", &data);
			AddLast(data);
			DisplayList();
		}
		else if(command == 4){
			DeleteLast();
			DisplayList();
		}
		else if(command == 5){
			int Element;
			printf("Element to Add Before : ");
			scanf("%d", &Element);
			printf("Data to be added : ");
			scanf("%d", &data);
			AddBefore(Element, data);
			DisplayList();
		}
		else if(command == 6){
			int Element;
			printf("Element to be deleted : ");
			scanf("%d", &Element);
			DeleteElement(Element);
			DisplayList();
		}
	}
	return 0;
}