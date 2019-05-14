//#include <stu.h>
#include "/media/sunandan/DATA/workspace/assn_algo_try/util/sort.h"

// Driver program to test above functions 
int main() 
{ 
	int arr[] = {64, 25, 12, 11, 22}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
  //int a=5;int b=7;
  //cout<< "a="<<a<<","<<"b="<<b<<endl;
  //swap(&a,&b);
  //cout<< "a="<<a<<","<<"b="<<b<<endl;
	return 0; 
} 
