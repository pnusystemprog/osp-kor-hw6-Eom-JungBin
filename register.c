#include <stdio.h>
#include "phone.h"

extern int pb_num;

void registerPhoneData()
{
	printf("New User Name : ");
	scanf("%s", PhoneBook[pb_num].Name);
	printf("PhoneNumber : ");
	scanf("%s", PhoneBook[pb_num++].PhoneNumber);
	printf("Registered...\n");
}
