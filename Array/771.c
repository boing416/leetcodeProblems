#include<stdio.h>
#include<string.h>

int numJewel(char* J, char* S)
{
	int result = 0;
	
//	printf("size1: %lu\n",sizeof(J)/sizeof(J[0]));
//	printf("size2: %lu\n",sizeof(S)/sizeof(S[0]));



	for(int i = 0;i < strlen(J);i++)
	{
		//printf("char1: %c\n",J[i]);
		for(int k = 0;k < strlen(S);k++)
		{
			//printf("char2: %c\n",S[k]);

			if(J[i] == S[k]){
				result++;
				//printf("RESULT + %c == %c\n", J[i], S[k]);				
			}
	
		}	
	}		

//	printf("Result: %d\n",result);

	return result;
}


int main()
{
	char J[] = "z\0", S[] = "aAAbZbbb\0";
	
//	int size = strlen(J); 

//	printf("Size: %d\n", size);

	int result = numJewel(J,S);
//	numJewel(J,S);

	printf("Output: %d\n",result);

}
