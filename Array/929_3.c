#include<stdio.h>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int numUniqueEmails(char** emails, int emailsSize)  
{

	//printf("FUNC"); 
	int count = 0;
	char **new_emails = (char **)calloc(emailsSize, sizeof(char));
	bool can_rec = true;
	int count_ar_word = 0;
	for (int i = 0; i < emailsSize; i++)
	{
		count_ar_word = 0;
		can_rec = true;
		new_emails[i] = (char *)calloc(30, sizeof(char *));

		if (new_emails[i])
		{ 

			for (int k = 0; k < strlen(emails[i]); k++)
			{

				char l = emails[i][k];

				//if(l >= 'A' && l <= 'a')
				//	printf("ok");
				//else
				//	continue;

				if (emails[i][k] == '+')
				{
					can_rec = false;
				}
				if (emails[i][k] == '@')
				{
					can_rec = true;
				}
				if (can_rec)
				{
					if (emails[i][k] != '.')
					{

						new_emails[i][count_ar_word] = emails[i][k];
						count_ar_word++;

					}

				}



			}
		}

	}

	//char *repeat_emails[emailsSize]; 

	char **repeat_emails = (char **)calloc(emailsSize, sizeof(char));
	
	bool cont = false;
	for (int i = 0; i < emailsSize; i++)
	{
		/*if (i == 0)
		{
			repeat_emails[i] = new_emails[i];
			count++;
			continue; 
		}*/
		
		bool repead = false;
		int index_k_rep = 0;
		int size = sizeof(repeat_emails) / sizeof(repeat_emails[0]);
		for (int k = 0; k < size; k++) 
		{
			
			if (repeat_emails[k] == new_emails[i])
			{
				repead = true;
				
				break;
			}	


		}

		if (repead == false)
		{
			repeat_emails[size+1] = new_emails[i];
			count++; 
		}



		
		//printf("EMAIL: %s\n", new_emails[i]);


	}



	return count;
}

void main()
{
	
	char *emails[] = { "fg.r.u.uzj+o.pw@kziczvh.com","r.cyo.g+d.h+b.ja@tgsg.z.com","fg.r.u.uzj+o.f.d@kziczvh.com","r.cyo.g+ng.r.iq@tgsg.z.com","fg.r.u.uzj+lp.k@kziczvh.com","r.cyo.g+n.h.e+n.g@tgsg.z.com","fg.r.u.uzj+k+p.j@kziczvh.com","fg.r.u.uzj+w.y+b@kziczvh.com","r.cyo.g+x+d.c+f.t@tgsg.z.com","r.cyo.g+x+t.y.l.i@tgsg.z.com","r.cyo.g+brxxi@tgsg.z.com","r.cyo.g+z+dr.k.u@tgsg.z.com","r.cyo.g+d+l.c.n+g@tgsg.z.com","fg.r.u.uzj+vq.o@kziczvh.com","fg.r.u.uzj+uzq@kziczvh.com","fg.r.u.uzj+mvz@kziczvh.com","fg.r.u.uzj+taj@kziczvh.com","fg.r.u.uzj+fek@kziczvh.com" };
	   
	numUniqueEmails(emails, sizeof(emails) / sizeof(emails[0])); 

	system("pause");

	return 0; 
}
