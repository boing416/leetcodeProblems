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
		new_emails[i] = (char *)calloc(30, sizeof(char *));



		for(int k =0; k < strlen(emails[i]); k++)
		{	

			char l = emails[i][k];

			//if(l >= 'A' && l <= 'a')
			//	printf("ok");
			//else
			//	continue;

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
					if(new_emails[i])
					{	
						new_emails[i][count_ar_word] = emails[i][k];
						count_ar_word++;
					}
				}
				
			}


		 				
		}
		
	}
	
        char *repeat_emails[emailsSize];
	bool cont = false;
        for(int i = 0;i < emailsSize;i++)
	{
		cont = false;			
		for(int k = 0; k < emailsSize;k++)
		{
			//for(int k = 0; k < emailsSize;k++)
			//{
				for(int j =0;j < strlen(new_emails[i]);j++)
				{
					//printf("Letter: %c\n",new_emails[k][j]);
					if(new_emails[i][j] == '@')
					{
				//		printf("Cont: %c\n",new_emails[i][j]);
						cont = true;
					}
						
				}
				for(int j =0;j < strlen(new_emails[k]);j++)
				{
					//printf("Letter: %c\n",new_emails[k][j]);
					if(new_emails[k][j] == '@')
					{
				//		printf("Cont: %c\n",new_emails[k][j]);
						cont = true;
					}
						
				}

			//}
			if(!cont)
			//	continue;

			
			if(i != k && strcmp(new_emails[i],new_emails[k]) == 0)
			{
				count++;
			}
			if(i == k || strcmp(new_emails[i],new_emails[k]) == 0)
			{

			
                               // printf("REPEAT:  email1: %s - email2: %s\n",new_emails[i],new_emails[k]);
				break;
				
			}

                               // printf("NO REPEAT: email1: '%s' - email2: '%s'\n",new_emails[i],new_emails[k]);
				count++;
				

		}
		printf("EMAIL: %s\n",new_emails[i]);


	}



	return count;
}

int main()
{
//        char *emails[] = {"test.email+alex@leetcode.com","rest.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};

        char *emails[] = {"fg.r.u.uzj+o.pw@kziczvh.com","r.cyo.g+d.h+b.ja@tgsg.z.com","fg.r.u.uzj+o.f.d@kziczvh.com","r.cyo.g+ng.r.iq@tgsg.z.com","fg.r.u.uzj+lp.k@kziczvh.com","r.cyo.g+n.h.e+n.g@tgsg.z.com","fg.r.u.uzj+k+p.j@kziczvh.com","fg.r.u.uzj+w.y+b@kziczvh.com","r.cyo.g+x+d.c+f.t@tgsg.z.com","r.cyo.g+x+t.y.l.i@tgsg.z.com","r.cyo.g+brxxi@tgsg.z.com","r.cyo.g+z+dr.k.u@tgsg.z.com","r.cyo.g+d+l.c.n+g@tgsg.z.com","fg.r.u.uzj+vq.o@kziczvh.com","fg.r.u.uzj+uzq@kziczvh.com","fg.r.u.uzj+mvz@kziczvh.com","fg.r.u.uzj+taj@kziczvh.com","fg.r.u.uzj+fek@kziczvh.com"};

	

	int count = numUniqueEmails(emails,sizeof(emails)/sizeof(emails[0]));

        printf("Count: %d\n",count);

	return 0; 
}
