#include<sort.h>

using namespace std;


void swap(int *xp, int *yp){ 
    cout<<"a="<<*xp<<","<<"b="<<*yp<<endl;
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
    cout<<"a="<<*xp<<","<<"b="<<*yp<<endl;
} 
/* selection sort */
void selectionSort(int arr[], int n){
 	int minInd=0;
	for(int i=0;i++;i<n){
    	minInd=i;
        cout<<"sorting.."<<endl;
      	for(int j=0;j++;j<i+1){
        	if(arr[i]<arr[j]){
            	minInd=j;
            	cout << "needs swap.." << endl;
            }
      	}
      swap(&arr[minInd],&arr[i]);
    }
} 
/*insertion sort*/
void insertionSort(int arr[], int n){
    int k,i,j;
    for(i=0;i<n;i++){
        k=arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>k){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=k;
    }
}
void merge(int arr[], int start,int mid,int end){
    
    int i,j,k;
    int nl= mid-start+1;
    int nr= end-mid;
    int L[nl],R[nr];
    
    for(i=0;i<nl;i++){
        L[i]=arr[start+i];
    }
    for(i=0;i<nr;i++){
        R[i]=arr[mid+i];
    }
    i=j=k=0;
    while(i<nr && j<nl){
        
        if(L[i] <= R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
}
/*merge sort*/
void mergeSort(int arr[],int start, int end){
    int mid= start+ (end-1)/2;
    if(start<end){
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
/* Function to print an array */
void printArray(int arr[], int size){ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
