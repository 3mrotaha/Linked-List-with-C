/************************************************************************** 
 * Auther : Amr M. Taha                                                   *
 * Version : V2.0                                                         *
 * DATE : 17th nov 2021                                                   *
 * Description :  Linked List - main                                      *
 **************************************************************************/
 #include <stdio.h>
#include "prototypes.h"

int main(){
	DataType data;
	int command;
	printf("\ncommands :\n>> 1 to add first, 2 to delete first\n>> 3 to add last, 4 to delete last \n>> 5 to add before an existed element, 6 to delete any element\n>> 7 to Add by Index\n>> 0 to exit");
	while(1){
		printf("\nEnter a command : ");
		scanf("%d", &command); 
		
		if(!command){break;}
		else if(command == 1){
			scanf(DATA_READ_PLACEHOLDER, &data);
			Addfirst(data);
			DisplayList();
		}
		else if(command == 2){
			Deletefirst();
			DisplayList();
		}
		else if(command == 3){
			scanf(DATA_READ_PLACEHOLDER, &data);
			AddLast(data);
			DisplayList();
		}
		else if(command == 4){
			DeleteLast();
			DisplayList();
		}
		else if(command == 5){
			DataType Element;
			printf("Element to Add Before : ");
			scanf(DATA_READ_PLACEHOLDER, &Element);
			printf("Data to be added : ");
			scanf(DATA_READ_PLACEHOLDER, &data);
			AddBefore(Element, data);
			DisplayList();
		}
		else if(command == 6){
			DataType Element;
			printf("Element to be deleted : ");
			scanf(DATA_READ_PLACEHOLDER, &Element);
			DeleteElement(Element);
			DisplayList();
		}
		else if(command == 7){
			int Index;
			printf("Enter Index : ");
			scanf("%d", &Index);
			printf("Data to be added : ");
			scanf(DATA_READ_PLACEHOLDER, &data);
			AddByIndex(Index, data);
			DisplayList();
		}
	}
	return 0;
}