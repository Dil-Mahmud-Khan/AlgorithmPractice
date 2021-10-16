#include<iostream>
using namespace std;
int main()
{
    int dil[10]={23,43,2,5,2,6,34,66,23,66};
    int n;
    int i=0;
    cout<<"Enter the number to search"<<endl;
    cin>>n;
    for(int i=0;i<10;i++){
        if(n==dil[i]){
        break;}


    }

cout<<n<<" Was found in the index "<<i<<" of the array"<<endl;
}