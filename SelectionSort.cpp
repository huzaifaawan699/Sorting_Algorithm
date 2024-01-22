#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main(){
    int data[]={53,23,79,43,23,1,3,4};
    int n=sizeof(data)/sizeof(data[0]);
    
    cout<<"Original Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
        
    }
    
    selection(data,n);
    
    cout<<"After Selection Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
        
    }
    return 0;
    
}
