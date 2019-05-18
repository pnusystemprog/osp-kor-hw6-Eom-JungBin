#include <stdio.h>
#include <string.h>
#include "phone.h"

extern void registerPhoneData();
extern void printAll();
extern void searchByName();
extern void deleteByName();

int pb_num = 0;
static int service_count = 0;
int main()
{
	int service, k;        // a variable for storing user's request
	char p[20];
	printf("Make your password (less then 20) : ");
	scanf("%s", pw);
	
	for (k = 0; k < 3; ++k) {
		printf("Enter your Password : ");
		scanf("%s", p);
		if(strcmp(p, pw) == 0)
			break;
		else
			printf(">>> Not Matched %d times!!\n", k+1);
	}
	if (k == 3) {
		printf("!!!You are not allowed to access PhoneBook!!!\n");
		return 0;
	}
	do
	{
		printf("\n=============== Telephone Book Management ===============");
		printf("\n<<< 1. Register\t 2. Print All\t 3. Search by ID\t 4. Delete\t 5. Exit >>>\n");
		printf("Please enter your service number (1-5) > ");
		if(scanf("%d", &service) == 1) {
			switch (service)
			{
			case 1: registerPhoneData(); break;
			case 2: printAll(); break;
			case 3: searchByName(); break;
			case 4: deleteByName(); break;
			case 5: break;
			default: printf("\n!!!You put wrong number!!!"); break;
			}
		}
		else{
			while(getchar()!='\n');
			printf("\n!!!You put wrong number!!!");
		}
		++service_count;
	} while (service != 5); // if Exit is not entered, the loop continues
	return 0;
}
