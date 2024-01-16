#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number of Elements in array: "<<endl;
cin>>n;
if(n<=0){
    cout<<"Invalid Choice PLease Enter Positive Integers:"<<endl;
    return -1;
}
int arr[n];
cout<<"Enter Elements in Array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];

}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout<<"Sorted Elements in ascending order:"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
