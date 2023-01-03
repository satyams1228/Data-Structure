// Take the larger element towards end
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
     
      for(int itr = 1;itr<=n-1;itr++){
     
        for(int j=0;j<=(n-itr-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
      
      }
     
     }

int main(){
     int n;
     cin>>n;
     int arr[1000];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     bubble_sort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i];
     }
}
