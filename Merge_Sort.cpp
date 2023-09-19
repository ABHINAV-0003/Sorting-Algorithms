#include<iostream>
#include<vector>
using namespace std;
void display(int n,vector<int> arr){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(vector <int> &arr,int low,int mid,int high){
vector<int> temp;
int left=low;
int right=mid+1;
while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    if(arr[left]>arr[right]){
        temp.push_back(arr[right]);
        right++;
        
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
}
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
    void mergesort(vector <int> &arr,int low, int high){
     if(low>=high){
        return;
     }
     int mid=(low+high)/2;
     mergesort(arr,low,mid);
     mergesort(arr,mid+1,high);
     merge(arr,low,mid,high);
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
    cout<<"Array before swapping"<<endl;
    display(n,arr);
    cout<<"Array after swapping"<<endl;
    mergesort(arr,0,n-1);
    display(n,arr);
    return 0;
}