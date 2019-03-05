#include<stdio.h>

void merge(int* nums1, int m, int* nums2, int n)
{
	int count = m+n;
	while(m  > 0 && n > 0)
	{
		if(n==0)
			break;
		if(m==0)
		{
			nums1[n-1] = nums2[n-1];
			n--;
			continue; 
		}
		if(nums1[m-1] > nums2[n-1])
		{
			nums1[(m+n)-1] = nums1[n-1];
			m--;
		}
		else
		{
			nums1[(m+n)-1] = nums2[n-1];
			n--;
		}
	}

	
	for(int i = count-1; i > 0;i--)
	{
		int max =0;
		for(int k=0; k < i; k++)
		{
			if(nums1[k] > nums1[max]) 
				max = k;
		}	

		int temp = nums1[i];
		nums1[i] = nums1[max];
		nums1[max] = temp; 
	}	
	printf("Test: %d\n",m);
}	


int main()
{
	int nums1[6] = {1,2,3,0,0,0},nums2[] = {2,5,6};
	int m=3,n=3;

	merge(nums1,m,nums2,n);
	int i = 0;
	while(i < 6)
	{
		printf("%d,",nums1[i]);
		i++;
		
	}
	printf("\n");	

	return 0;
		
}
