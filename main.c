/************************************************************************** 
 * Auther : Amr Mohamed Taha Ibrahem                                      *
 * Version : V1                                                           *
 * DATE : 14th nov 2021                                                   *
 * Description :  Linked List - main                                      *
 **************************************************************************/
 #include <stdio.h>
#include "prototypes.h"

int main(){
	float data;
	int command;
	printf("\ncommands : \n>> 1 to add first, 2 to delete first\n>> 3 to add last, 4 to delete last \n>> 5 to add before an existed element, 6 to delete any element\n>> 0 to exit :");
	while(1){
		printf("\nEnter a command : ");
		scanf("%d", &command);
		
		if(!command){break;}
		else if(command == 1){
			scanf("%f", &data);
			Addfirst(data);
			DisplayList();
		}
		else if(command == 2){
			Deletefirst();
			DisplayList();
		}
		else if(command == 3){
			scanf("%f", &data);
			AddLast(data);
			DisplayList();
		}
		else if(command == 4){
			DeleteLast();
			DisplayList();
		}
		else if(command == 5){
			float Element;
			printf("Element to Add Before : ");
			scanf("%f", &Element);
			printf("Data to be added : ");
			scanf("%f", &data);
			AddBefore(Element, data);
			DisplayList();
		}
		else if(command == 6){
			float Element;
			printf("Element to be deleted : ");
			scanf("%f", &Element);
			DeleteElement(Element);
			DisplayList();
		}
	}
	return 0;
}