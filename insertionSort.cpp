#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number of Elements in Array:"<<endl;
cin>>n;
if(n<=0){
    cout<<"Invalid Choice Please Enter Positive Integer: "<<endl;
    return 1;
}
int arr[n];
cout<<"Enter Elements of Array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>current){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
cout<<"Sorted Array:"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
