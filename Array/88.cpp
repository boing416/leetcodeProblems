#include<iostream>

using namespace std; 

void merge(int* nums1, int m, int* nums2, int n) {

	while (m > 0 || n > 0) {

		cout << "m: " << m << "\n"; 
		cout << "n: " << n << "\n";     
		cout << "nums1: " << nums1[0] << "," << nums1[1] << "," << nums1[2] << "," << nums1[3] << "," << nums1[4] << "," << nums1[5] << "\n";
		cout << "nums2: " << nums2[0] << "," << nums2[1] << "," << nums2[2] << "\n";  
		

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
	cout << "Test2" << endl;   
} 

int main()
{

	int nums1[] = { 1,2,3,0,0,0 };
	int nums2[] = { 2,5,6 };
	int m = 3, n = 3;
	
	merge(nums1, m, nums2, n);  

	system("pause");
}
