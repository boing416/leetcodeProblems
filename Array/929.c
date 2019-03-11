#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int numUniqueEmails(char** emails, int emailSize)
{
	int count = 0;
	char **new_emails = (char **)calloc(emailSize, sizeof(char));
	bool can_rec = true;
	int count_ar_word = 0;
	for(int i = 0;i < emailSize;i++)
	{
		count_ar_word = 0;
		can_rec = true;
		new_emails[i] = (char *)calloc(30, sizeof(char));

		for(int k =0; k < strlen(emails[i]); k++)
		{	
		 	//printf("EmailFunc: %c\n",emails[i][k]);

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
				if(emails[i][k] != '.')
				{
					new_emails[i][count_ar_word] = emails[i][k];
					//strcpy(((*new_emails)[count_ar_word]),emails[i][k]);
					count_ar_word++;

				}
				
			}

			//printf("New Email: %s\n",new_emails[i]);
		 				
		}
		
	}
	
	char *repeat_emails[emailSize];

	for(int i = 0;i < emailSize;i++)
	{
		for(int k = 0; k < emailSize;k++)
		{
			
			if(i == k || new_emails[i] == new_emails[k])
			{
				//repeat_emails[count_rep] = new_emails[k];
			
				printf("REPEAT:  email1: %s - email2: %s\n",new_emails[i],new_emails[k]);
				break;
				
			}
			printf("NO REPEAT: email1: '%s' - email2: '%s'\n",new_emails[i],new_emails[k]);
			count++;
		}

	}


        //REPEAT:  email1: testemail@leetcodecom - email2: testemail@leetcodecom
        //NO REPEAT: email1: 'restemail@leetcodecom' - email2: 'testemail@leetcodecom'
        //REPEAT:  email1: restemail@leetcodecom - email2: restemail@leetcodecom
        //NO REPEAT: email1: 'testemail@leetcodecom' - email2: 'testemail@leetcodecom'    ?????????????????????????????????
        //NO REPEAT: email1: 'testemail@leetcodecom' - email2: 'restemail@leetcodecom'
        //REPEAT:  email1: testemail@leetcodecom - email2: testemail@leetcodecom
        //Count: 3

	for(int i =0; i< emailSize;i++)
	{
		//for(int k =0; k < emailSize
	//	printf("email: %s\n",repeat_emails[i]);

	}

	return count;
}

int main()
{
	char *emails[] = {"test.email+alex@leetcode.com","rest.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};  


	

	int count = numUniqueEmails(emails,3);

	printf("Count: %d\n",count);

	return 0; 
}
