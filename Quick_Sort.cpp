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
    int partition(vector<int> &arr,int low,int high){
        int pivot=arr[low];
        int left=low;
        int right=high;
        while(left<=right){
            while( left<= high && pivot>=arr[left])
                left++;
            while(right>=low+1 && pivot<arr[high]){
                right--;
            }
            if(left<right){
                swap(arr[left],arr[right]);
            }
            
        }
        swap(arr[low],arr[right]);
        return right;
    }
    void quicksort(vector <int> &arr,int low,int high){
        if(low<high){
            int index=partition(arr,low,high);
            quicksort(arr,low,index-1);
            quicksort(arr,index+1,high);
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
    cout<<"Array before sorting "<<endl;
    display(n,arr);
    cout<<"Array after sorting "<<endl;
    quicksort(arr,0,n-1);
    display(n,arr);
    return 0;
}