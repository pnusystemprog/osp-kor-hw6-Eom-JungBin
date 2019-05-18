#include <stdio.h>
#include <string.h>
#include "phone.h"

extern int pb_num;

void deleteByName()
{
	char de[10];
	int i, j;
	printf(">>> Enter a name to delete : ");
	scanf("%s", de);
	for (i = 0; i < pb_num; ++i) {
		if(strcmp(PhoneBook[i].Name, de) == 0){
			printf("%s is deleted...\n", de);
			for (j = i + 1; j < pb_num; ++j){
				PhoneBook[i++] = PhoneBook[j];
			}
			break;
		}
	}
	if(i == pb_num)
		printf("Oops! %s is not in the PhoneBook.\n", de);
	pb_num = i;
}
