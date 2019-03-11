#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int numUniqueEmails(char** emails, int emailsSize)
{
	int count = 0;
        char **new_emails = (char **)calloc(emailsSize, sizeof(char));
	bool can_rec = true;
	int count_ar_word = 0;
        for(int i = 0;i < emailsSize;i++)
	{
		count_ar_word = 0;
		can_rec = true;
		new_emails[i] = (char *)calloc(30, sizeof(char));

		for(int k =0; k < strlen(emails[i]); k++)
		{	


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

					count_ar_word++;

				}
				
			}


		 				
		}
		
	}
	
        char *repeat_emails[emailsSize];
	
        for(int i = 0;i < emailsSize;i++)
	{
                for(int k = 0; k < emailsSize;k++)
		{
			
			if(i != k && strcmp(new_emails[i],new_emails[k]) == 0)
			{
				count++;
			}
			if(i == k || strcmp(new_emails[i],new_emails[k]) == 0)
			{

			
                                //printf("REPEAT:  email1: %s - email2: %s\n",new_emails[i],new_emails[k]);
				break;
				
			}

                                //printf("NO REPEAT: email1: '%s' - email2: '%s'\n",new_emails[i],new_emails[k]);
				count++;
				

		}

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

