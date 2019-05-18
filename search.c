#include <stdio.h>
#include <string.h>
#include "phone.h"

extern int pb_num;

void searchByName()
{
	char se[10];
	int i;
	printf(">>> Enter a name to serach : ");
	scanf("%s", se);
	for (i = 0; i < pb_num; ++i) {
		if(strcmp(PhoneBook[i].Name, se) == 0){
			printf("%s\t%s\n", se, PhoneBook[i].PhoneNumber);
			break;
		}
	}
	if(i == pb_num)
		printf("Oops! %s is not in the PhoneBook\n", se);
}
