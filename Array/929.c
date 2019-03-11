#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int numUniqueEmails(char** emails, int emailSize)
{
	int count = 0;
	char *new_emails[emailSize];
	bool can_rec = true;
	int count_ar_word = 0;
	for(int i = 0;i < emailSize;i++)
	{
		count_ar_word = 0;
		can_rec = true;
		for(int k =0; k < strlen(emails[i]); k++)
		{	
		 	printf("EmailFunc: %c\n",emails[i][k]);
                        
		 	if(emails[i][k] == '+')
		 	{
		 		can_rec = false;
		 	}
			if(emails[i][k] == '@')
			{
				can_rec = true;
			}
			if(can_rec)
			{
				new_emails[i][count_ar_word] = emails[i][k];
				count_ar_word++;

			}

			printf("New Email: %s\n",new_emails[i]);
		 				
		}
		
	}
	
	*emails = *new_emails;


	for(int i = 0;i < emailSize;i++)
	{
		printf("Email: %s\n",emails[i]);
	}

	return count;
}

int main()
{
	char *emails[] = {"test.email+alex@leetcode.com","rest.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};  


	

	numUniqueEmails(emails,3);

	

	return 0; 
}
