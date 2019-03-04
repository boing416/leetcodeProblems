#include<stdio.h>
#include<stdlib.h>
void Calc(int *num)
{
	*num = 15;
}

int* SortArray(int *ar, int size)
{
	int temp[] = {0,0,0,0};
	int n = 0,n2 = 0;

	for(int i=0; i < size; i++)
	{
		if(ar[i]%2 == 0)
		{
			//if(temp[k] == 0)
			//{	
				temp[n] = ar[i];
				n++;
				//break;
			//}	
			//else{
								//break; 
			//}

		}
		else{
			temp[(size-1)-n2] = ar[i];
				n2++;

		}
	}

	int *t = temp;
	return  t;
}

int* sortArrayByParty(int* A, int ASize, int* returnSize){
	
	int *temp = (int *)malloc(sizeof(int)*ASize);

	*returnSize = ASize;
	
	int n = 0,n2 = 0;

	for(int i=0; i < ASize; i++)
	{
		if(A[i]%2 == 0)
		{
				temp[n] = A[i];
				n++;

		}
		else{
			temp[(ASize-1)-n2] = A[i];
				n2++;

		}
	}

		
	return  temp;

}

int main()
{
//	int num = 10;
//	Calc(&num);
//	printf("NUM: %d\n",num);
	int ar[] = {3,1,2,4};
	
    	int size = 4;
	int result[size];
//	printf("Length: %lu\n",(sizeof(ar)/sizeof(ar[0])));
//	int *result = SortArray(ar,size);
//   	printf("AR: %d",result[1]);
	sortArrayByParty(ar, size,result );

	printf("Return :  %d,%d,%d,%d \n", result[0],result[1],result[2],result[3]);	
//	SortArray(ar,size);
	
	return 0;
};

