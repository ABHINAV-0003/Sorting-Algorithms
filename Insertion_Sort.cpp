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
    void insertionsort(int n, vector <int> &arr){
       for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
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
    insertionsort(n,arr);
    display(n,arr);
    return 0;
}