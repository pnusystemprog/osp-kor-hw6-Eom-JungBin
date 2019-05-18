#include <stdio.h>
#include "phone.h"

extern int pb_num;

void printAll()
{
	int i;
	printf("<< Display all contacts in the PhoneBook >>\n");
	for(i=0; i<pb_num; ++i)
		printf("%s		%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
}
