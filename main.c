#include <stdio.h>

// Binary search algorithm allows to find an element in a sorted array, much quicker than in an unsorted array.
int binary_search(int arr[], int el, int lIndex, int rIndex) {
   if (lIndex > rIndex) {
	  return -1;
   }
   
   int midPoint = (rIndex - lIndex) / 2 + lIndex;
   
   if (arr[midPoint] == el) {
	  return midPoint;
   } else if (arr[midPoint] > el) {
	  return binary_search(arr, el, lIndex, midPoint - 1);
   } else if (arr[midPoint] < el) {
	  return binary_search(arr, el, midPoint + 1, rIndex);
   }
   
   return 0;
}

int main()
{
   int sorted[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
   
   int rIndex = sizeof(sorted) / sizeof(sorted[0]);
   int result = binary_search(sorted, 12, 8, rIndex);
   printf("Index of 12 is: %d", result);
   
   return 0;
}
