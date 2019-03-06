void merge(int* nums1, int m, int* nums2, int n) {
    int count = m + n;

	while (m > 0 || n > 0) {	


		if (n == 0)
			break;
		if (m == 0) {
			nums1[n - 1] = nums2[n - 1];
			n--;
			continue;
		}
		if (nums1[m - 1] > nums2[n - 1]) {
			nums1[m + n - 1] = nums1[m - 1];
			m--;
		}
		else {
			nums1[m + n - 1] = nums2[n - 1];
			n--;
		}
	}
	
	
	int nt = 0;
	int temp = 0;
	int temp_id = 0;
	int max = 0;

	for (int i = count - 1; i > 0; i--)
	{
		
		max = 0; 
		for (int k = 0; k <= i; k++)
		{
			nt = nums1[k]; 
			if (nums1[k] > max) {
				max = nums1[k];
				temp_id = k;
			}
				 
		}

		temp = nums1[i];
		nums1[i] = max;

		nums1[temp_id] = temp; 

		
	}


	
}
