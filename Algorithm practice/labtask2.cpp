#include<iostream>
using namespace std;

void swap(int *y,int *m){
    int temp=*y;
    *y=*m;
    *m=temp;
}
void bubblesort(int arr[],int n){
int i,j;
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
if(arr[j]>arr[j+1])
swap(&arr[j],& arr[j+1]);

}

void printarray(int arr[],int size){
int i;
for(i=0;i<size;i++)
cout<<arr[i]<<endl;


}

int main(){
    int n,i;
    cout<<"Enter the size of  array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array element"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
}