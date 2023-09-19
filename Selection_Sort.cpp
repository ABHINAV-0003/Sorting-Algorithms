#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(int n,vector<int> arr){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int n, vector <int> &arr){
       for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
    swap(arr[i],arr[min]);
    }  
    }  
int main(){
    int n,a;
    cout<<"Enter the size of the array ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++){ 
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Array before sorting"<<endl;
    display(n,arr);
    cout<<"Array after sorting"<<endl;
    selectionsort(n,arr);
    display(n,arr);
    return 0;
}