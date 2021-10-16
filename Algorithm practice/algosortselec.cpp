#include <iostream> 
using namespace std; 
  
void insertionSort(int arr[], int n) 
{ 
int i, key, j; 
for (i = 1; i < n; i++) 
{ 
key = arr[i]; 
j = i - 1; 
  
while (j >= 0 && arr[j] > key) 
{ 
arr[j + 1] = arr[j]; 
j = j - 1; 
} 
arr[j + 1] = key; 
} 
} 
void printarray(int arr[], int n) 
{ 
int i; 
for (i = 0; i < n; i++) 
cout << arr[i] << " "; 
cout << endl; 
} 
  
 
 
int main() 
{ 
int n,i; 
  
cout << "Enter array size: "; 
cin >> n; 
  
int arr[n]; 
  
for(i = 0; i < n; i++) 
{ 
cout << i + 1 << ".Enter number: "; 
cin >> arr[i]; 
  
} 
insertionSort(arr,n); 
printarray(arr,n); 
return 0; 
} 